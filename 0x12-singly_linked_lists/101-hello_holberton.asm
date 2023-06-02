segment .data
    hello db "Hello, Holberton", 0

segment .text
    extern printf

global main
main:
    mov rdi, hello
    xor eax, eax
    call printf

    xor eax, eax
    ret
