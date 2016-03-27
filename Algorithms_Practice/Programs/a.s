.include "io.h"

.data
.align 2 
inpstring: .space 20

.text

.global	myPrint
.global main

main:
	getstr inpstring
	ldr r0,=inpstring
	mov r10,#0
	loop:
	ldrb r1,[r0,r10]
	cmp r1,#0
	beq loop2
	cmp r1,#90
	addls r1,r1,#32 
	subhi r1,r1,#32
	strb r1,[r0,r10]
	add r10,r10,#1 
	b loop
	loop2:
         putstr inpstring
	mov r1,#12
	bl myPrintch

.global	myPrintch
myPrintch:              @print character value of r1
	@prints an character present in r1
	stmfd	sp!,{r0,r1,r2,r3,r7, lr}
	add	r7, sp, #0
	adr 	r0, .LC2
	bl	printf
	mov	r0, #0
	ldmfd	sp!,{r0,r1,r2,r3,r7, pc}
@int sys_exit(int status)
        mov r0, #0      @ Return code
        mov r7, #1      @ sys_exit
        svc 0x00000000
 
.LC2:
	.ascii	"%c\012\000"   @print char
	.align 2
