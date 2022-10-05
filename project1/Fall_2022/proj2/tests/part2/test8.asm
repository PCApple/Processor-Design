li gp, 2
li t0, 0
auipc t1,0x0
addi t1, t1, 28
jr -4(t1)
addi t0,t0,1
addi t0,t0,1
addi t0,t0,1
addi t0,t0,1
addi t0,t0,1 
addi t0,t0,1 
li t2, 4 
li gp, 1 
bne t0, t2, fail
bne zero, gp, done 
j fail project1/Fall_2022/proj2/tests/part2/test8.asm
li gp, 3
j done 
fail: 
li gp, 0w
done: 
addi gp, x0, 1 
nop 