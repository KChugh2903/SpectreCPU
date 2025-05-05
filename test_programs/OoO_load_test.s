.text
.globl main

main:
    li s0, 0x80000000+256
    li s1, 0x80000000+256
    li s2, 0x80000000+42
    
    sw zero, 0(s0)
    
    # long dep chain for this store
    addi s0, s0, -1
    addi s0, s0, 1
    addi s0, s0, -1
    addi s0, s0, 1
    sw s2, 0(s0)
    
    # to make sure this load executes before it
    lw a0, 0(s1)
    call printhex
    ebreak
