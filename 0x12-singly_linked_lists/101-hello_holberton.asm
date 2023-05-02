section .data
	msg db 'Hello, Holberton', 0Ah	; it the string to print
	fmt db '%s', 0Ah		; it the format string for printf

section .text
	global main

main:
	push rbp			; it save the base pointer
	mov rbp, rsp			; it set the base pointer to the current stack pointer

	lea rdi, [msg]			; it load the address of the hello string into rdi
	lea rsi, [fmt]			; it load the address of the format string into rsi
	mov eax, 0			; it set eax to 0
	call printf			; it call the printf function

mov rsp, rbp			; it restore the stack pointer
	pop rbp				; it restore the base pointer
	xor eax, eax			; it set the return value to 0
	ret				; it return to the operating system
