.include "io.h"

.data
.align 2 
inpstring: .space 20

.text
.global main

main:
	getstr inpstring
	mov r9,#2
	mov r10,r9
	ldr r0,=inpstring
	ldr r1,[r0,r10]
	sub r1,r1,#32  @Assume string entered will be in Small Letters
	str r1,[r0,r10]
	putstr inpstring

@int sys_exit(int status)
        mov r0, #0      @ Return code
        mov r7, #1      @ sys_exit
        svc 0x00000000
 
