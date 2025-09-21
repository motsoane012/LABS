.data
prompt: .asciz "Enter height n: "
star: .asciz "*"
newline: .asciz "\n"

.text
.globl _start
_start:
    # Print prompt
    la a0, prompt
    li a7, 4
    ecall
    
    # Read integer input
    li a7, 5
    ecall
    mv t0, a0        # store input n in t0
    
    li t1, 1         # counter i = 1
    
loop:
    bgt t1, t0, exit # if i > n, exit
    
    # Print i stars
    li t2, 1         # counter j = 1
star_loop:
    bgt t2, t1, next_line
    la a0, star
    li a7, 4
    ecall
    addi t2, t2, 1
    j star_loop

next_line:
    la a0, newline
    li a7, 4
    ecall
    
    addi t1, t1, 1   # i++
    j loop

exit:
    li a7, 10
    ecall