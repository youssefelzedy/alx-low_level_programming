section .data
    hello db "Hello, Holberton",0

section .text
    global main
    extern printf

main:
    push rbp                ; Set up stack frame
    mov rdi, hello          ; Load the address of hello string into rdi
    call printf             ; Call printf function
    add rsp, 8              ; Clean up the stack
    mov eax, 0              ; Return 0 from main
    pop rbp                 ; Restore original base pointer
    ret                     ; Return from main
