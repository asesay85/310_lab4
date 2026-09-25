.section .bss
.globl ram
.lcomm ram, 256  # Reserve 256 bytes of RAM (uninitialized memory)

.section .text
.globl Summation  #make this function visible to c program


Summation:

    mov $0, %eax 

    loop_label:
        add (%rdi), %eax
        add $4, %rdi
        dec %rsi

        cmp $0, %rsi
        jne loop_label


ret    
    


    

.section .note.GNU-stack,"",@progbits