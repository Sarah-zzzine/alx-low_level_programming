section .data
    hello db "Hello, Holberton",10 ;

section .text
    global main
    extern printf

main:
    mov rdi, hello
    call printf
    ret

