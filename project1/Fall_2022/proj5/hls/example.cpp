


#ifdef __SYNTHESIS__
#include "hls_stream.h"
#include "ap_axi_sdata.h"
#endif

#include "convolution.h"

#define MAX_BUFF_SIZE 16000

#ifndef __SYNTHESIS__
void example(int *A , int *B)
#else
void example(hls::stream< ap_axis<32,2,5,6> > &A,
	     hls::stream< ap_axis<32,2,5,6> > &B)
#endif

{
#pragma HLS INTERFACE axis port=A
#pragma HLS INTERFACE axis port=B
#pragma HLS INTERFACE s_axilite port=return

    ap_axis<32,2,5,6> axi_tmp;


	int local_in_buffer [MAX_BUFF_SIZE];
	int local_out_buffer [MAX_BUFF_SIZE];
	int kernel [KERNEL_SIZE];

    int dst [IMAGE_SIZE];
    int padded_dst [(TEST_IMG_ROWS + KERNEL_HEIGHT) * (TEST_IMG_COLS + KERNEL_WIDTH)];

    int height = TEST_IMG_COLS;
    int width  = TEST_IMG_ROWS;

    int border_height = (KERNEL_HEIGHT-1) / 2;
    int border_width  = (KERNEL_WIDTH-1) / 2;

    int padd_width  = width + 2 * border_width;
    int padd_height = height + 2 * border_height;

	// initialize kernel values
// KENEL_INIT
KI: for (int i = 0; i < KERNEL_SIZE; ++i) {
		kernel[i] = (i == 4) ? 1 : 0;
	}

    // initialize local buffer
	/*{
	    int i = 0;
    // RECEIVING_INPUT
    RI: while (1) {
            A.read(axi_tmp);
            local_in_buffer[i++] = axi_tmp.data.to_int();
            if (axi_tmp.last)
                break;
        }
    }*/

    // Clear dst frame buffer
// Clear_dst
CD: for (int i = 0; i < height * width; ++i) {
  #pragma HLS PIPELINE II=1
    local_out_buffer[i] = 0;
  }
// Clear_padded
CP: for (int i = 0; i < padd_height * padd_width; ++i) {
    //#pragma HLS PIPELINE II=1
        padded_dst[i] = 0;
    }

// paddI
PI: for (int i = 0; i < height ; i++) {
    // paddJ
    PJ: for (int j = 0 ; j < width ; j++){
            //int pos = i * width + j;
    		A.read(axi_tmp);
            int new_pos = (i + border_height) * padd_width + (j + border_width);
            padded_dst[new_pos] = axi_tmp.data.to_int();
        #ifdef DEBUG
            printf("[%d] [%d] goes into [%d][%d], orig_pos:%d new_pos:%d \n", i, j, (i+border_height), (j+ border_width), pos, new_pos);
        #endif
        }
    }

    // Horizontal convolution pass - makes O(K*K) reads from input image per output pixel
// ConvR    (convolution)
CR: for (int row = border_height; row < (height + border_height); ++row) {
    // ConvC    (convolution)
    CC: for (int col = border_width; col < (width + border_width); ++col) {
      	    int dst_loc = (row-border_height) * width + (col-border_width);
        #ifdef DEBUG
       	    printf("col:%d row:%d output pixel loc is %d:\n ", col, row, dst_loc);
        #endif

    //#pragma HLS unroll
            data_t tmp_data = 0;
        // KERNELH
        KH: for (int i = 0; i < KERNEL_WIDTH; ++i) {
            // KERNELW
            KW: for (int j = 0; j < KERNEL_HEIGHT; ++j) {
                    int src_loc = (row - border_height) * padd_width + (col-border_width) + j + (i) * padd_width;
                    int kernel_loc = j + i * KERNEL_HEIGHT;
                    tmp_data += padded_dst[src_loc] * kernel[kernel_loc];
                #ifdef DEBUG
                    printf("output[%d]:%d += padded[%d]:%d * kernel[%d]:%d\n",
                        dst_loc, dst[dst_loc], src_loc, padded_dst[src_loc], kernel_loc, kernel[kernel_loc]);
                #endif
            	}
            }
       	    local_out_buffer[dst_loc] = tmp_data;
        #ifdef DEBUG
    	    printf("==============\n");
        #endif
        }
    }

    // sending data
// SENDING_OUTPUT
SO: for (int i = 0; i < IMAGE_SIZE; ++i) {
        printf("sending B[%d]\n", i);
        axi_tmp.data = local_out_buffer[i];
        axi_tmp.last = (i == (IMAGE_SIZE-1));
        B.write(axi_tmp);
    }




}


