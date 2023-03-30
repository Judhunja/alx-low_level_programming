section .data
    hello db "Hello, Holberton", 10, 0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    mov edi, hello
    mov rax, 0
    call printf

    mov rsp, rbp
    pop rbp
    mov rax, 0
    ret

