extern printf

section .text
   global main

main:
pushrbp

mov rdi, fmt
mov rsi,msg
mov rax,0
call printf

poprbp

mov rax,0
ret

section .data
msg: db "Hello, Holberton", 0
fmt:db "%s", 10, 0
