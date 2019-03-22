	global main
	extern	printf

	section	.data
string:	db	"Hello, Holberton", 10, 0
format:	db	"%s",0

	section	.text
main:
	push	rbp
	mov	rdi, format
	mov	rsi, string
	call	printf
	pop	rbp
	mov	eax,0
	ret
