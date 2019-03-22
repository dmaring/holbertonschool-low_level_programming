	global main
	extern	printf

	section	.data

string:	db	"Hello, Holberton",0
format:	db	"%s", 10, 0

	section	.text
main:
	push	rbp
	mov	rdi, format
	mov	rsi, string
	call	printf
	pop	rbp
	ret
