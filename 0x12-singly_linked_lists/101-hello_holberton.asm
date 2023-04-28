_global main
	extern	printf
main:
	now	edi, format
	xor 	eax, eax
	call 	printf
	mov	eax, 0
format: db 'Hello, Hoberlton\n', 0
