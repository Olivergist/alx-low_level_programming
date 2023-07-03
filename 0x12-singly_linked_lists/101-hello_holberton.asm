section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    mov rdi, format
    mov rsi, hello
    xor eax, eax  ; Clear the upper 32 bits of rax

    ; Call printf
    call printf

    ; Exit the program
    xor eax, eax
    ret

