section .data
    hello: db 'Hello, Holberton', 10, 0   ; define a null-terminated string with a newline character

section .text
    global main

    extern printf                        ; declare the external printf function

    main:
        push rbp                         ; save the base pointer
        mov rbp, rsp                     ; move the stack pointer to the base pointer

        lea rdi, [hello]                 ; load the address of the hello string into rdi
        xor eax, eax                     ; clear the eax register
        call printf                      ; call the printf function with the address of the hello string

        mov rsp, rbp                     ; restore the stack pointer
        pop rbp                          ; restore the base pointer
        xor eax, eax                     ; clear the eax register
        ret                              ; return from the main function

