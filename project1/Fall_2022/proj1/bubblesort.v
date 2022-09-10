module bubblesort (
    input wire clk,
    input wire reset,     
    input wire rd_en, 
    output wire [15:0] dat_out0,
    output wire [15:0] dat_out1,
    output wire [15:0] dat_out2,
    output wire [15:0] dat_out3,
    output wire [15:0] dat_out4,
    output wire [15:0] dat_out5,
    output wire [15:0] dat_out6,
    output wire [15:0] dat_out7,
    output wire [15:0] dat_out8,
    output wire [15:0] dat_out9,
    output wire done
); 

    reg [15:0] dmem [9:0];

    assign dat_out0 = dmem[0];
    assign dat_out1 = dmem[1];
    assign dat_out2 = dmem[2];
    assign dat_out3 = dmem[3];
    assign dat_out4 = dmem[4];
    assign dat_out5 = dmem[5];
    assign dat_out6 = dmem[6];
    assign dat_out7 = dmem[7];
    assign dat_out8 = dmem[8];
    assign dat_out9 = dmem[9];   
    
    reg [3:0] i;
    reg[7:0] counter;
    reg[3:0] state;
    reg[15:0] temp1;
    reg[15:0] temp2;
    reg[1:0] swap;
    // Initialize the memory
    initial begin
        $readmemh("ex1.mem", dmem);
        i <= 0;
        counter <= 0;
        state <= 1;
    end
    
    reg         m_we;   // write enable
    reg [3:0]   m_wa;   // write address
    reg [3:0]   m_ra;   // read address
    reg [15:0]  m_din;  // input data
    
    wire [15:0] m_dout; // output data
    
    // Dual-port RAM with asynchronous read
    always @(posedge clk) begin
        if (m_we) begin
            dmem[m_wa] <= m_din;    
        end       
    end
    assign m_dout = dmem[m_ra];
  
    // Sorting circuit implementation
    // TODO: implement a state machine that populates m_we, m_wa, m_ra, m_din, and read m_dout in the correct order.
        
    // uncomment the following line for debugging
    // initial $monitor($time, ": clk=%b, reset=%b, rd_en=%b, done=%b, m_ra=%0h, m_wa=%0h, m_we=%b, m_din=%0h, m_dout=%0h", clk, reset, rd_en, done, m_ra, m_wa, m_we, m_din, m_dout);

  
  // code for checking and swapping
  // State 1 - Read mem[i] (mem[i] == a)
  // State 2 - Read mem[i+1] (mem[i+1] == b)
  // State 3 - compare a & b
  // State 4 - If swap, set swap = 1
  // State 5 - If swap, temp = mem[i]
  // 					 If swap, mem[i] = mem[i+1]
  // State 6 - If swap, mem[i+1] = temp
  // State 7 - Checking/Incrementing Counter
	always @(posedge clk or posedge reset) begin
  if (we) begin 
    if (state == 1) begin
      m_ra <= i
      state <=2
    end else if (state == 2) begin
        m_ra <= i + 1
        temp1 <= m_dout
        state <= 3
    end else if (state == 3) begin
        temp2 <= m_dout
        if (temp1 > temp2) begin
            state <= 4
        end else begin
            state <= 7
        end
    end else if (state == 4) begin
      swap <= 1
      state <= 5
    end else if (state == 5) begin
      m_we <= 1
      m_wa <= i+1
      m_din <= temp1
      state <= 6
    end else if (state == 6) begin
      m_we <= 1
      m_wa <= i
      m_din <= temp2
      state <= 7
    end else if (state == 7) begin
      m_we <= 0
      counter <= counter + 1;
      if (counter >= 100)
        state <= 0
      else
        state <= 1
    end 
end 
endmodule
