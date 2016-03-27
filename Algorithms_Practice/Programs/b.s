.include "io.h"

.data
.align 2 
inpstring: .space 20

.text
.global main

main:
	getstr inpstring
	mov r9,#0
	add r9,r9,r0
	ldr r0,[r0]
	sub r0,r0,#32  @Assume string entered will be in Small Letters
	str r0,[r9]
	putstr inpstring

@int sys_exit(int status)
        mov r0, #0      @ Return code
        mov r7, #1      @ sys_exit
        svc 0x00000000
 
