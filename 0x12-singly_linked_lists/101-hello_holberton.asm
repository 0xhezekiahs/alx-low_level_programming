section .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s\n", 0

	section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, fmt
	mov rsi, msg
	xor rax, rax ; Clear RAX register (for compatibility)
	call printf
	pop rbp

	mov rax, 60     ; syscall: exit
	xor rdi, rdi    ; status: 0
	syscall
