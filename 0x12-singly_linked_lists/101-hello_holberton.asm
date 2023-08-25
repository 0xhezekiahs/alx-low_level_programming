SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	global main
	extern printf

maiN:
	mov edi, fmt	; handle format
	mov esi, msg	; handle print
	mov eax, 0	; syscall exit
	call printf

	mov eax, 0
	ret	; return value
