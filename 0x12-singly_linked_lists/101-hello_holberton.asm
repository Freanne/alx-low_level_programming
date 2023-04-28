section .data
    message db 'Hello, Holberton', 0
    format db '%s\n', 0

section .text
    global main

main:
    push rbp
    mov rbp, rsp

    sub rsp, 16          ; reserve space for printf arguments
    lea rdi, [message]   ; set first printf argument (string message)
    lea rsi, [format]    ; set second printf argument (format string)
    xor eax, eax         ; clear rax (return value)
    call printf          ; call printf function
    add rsp, 16          ; clean up the stack

    mov rsp, rbp
    pop rbp
    ret

