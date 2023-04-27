section .data
	message db 'Hello, Holberton', 0
	newline db 10, 0

section .text
	extern printf
	global main

main:
	push rbp
	mov rbp, rsp

	lea rdi, [message]
	xor eax, eax
	call printf

	lea rdi, [newline]
	xor eax, eax
	call printf

	mov rsp, rbp
	pop rbp
	xor eax, eax
	ret
