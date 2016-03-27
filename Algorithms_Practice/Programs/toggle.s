.include "io.h"

.data
.align 2 
inpstring: .space 20

.text
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
	mov r4,#10
	str r4,[r0,r10]
	putstr inpstring
	bl exit
@int sys_exit(int status)
      @  mov r0, #0      @ Return code
       @ mov r7, #1      @ sys_exit
       @ svc 0x00000000
 
