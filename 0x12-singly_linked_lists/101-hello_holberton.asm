section .data
    msg db 'Hello, Holberton', 0xA ; 0xA is the ASCII code for a new line (LF)
section .text
    extern printf
    global main
main:
    ; prepare arguments for printf
    mov edi, msg ; message to print
    xor eax, eax ; clear eax register
    call printf ; call printf function

    ; exit
    xor eax, eax ; clear eax register
    ret ; return to operating system
