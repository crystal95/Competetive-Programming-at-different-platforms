.include "io.h"

.data
@read the input string into the following array
string: .space 20 
.align 2 

.text
.global main

@Using getstr read a string from terminal. Reverse the string inplace.
@Then the print the string back onto the terminal.

main:
getstr string
ldr r0,=string
mov r10,#0
loop: ldrb r1,[r0,r10]
cmp r1,#0
beq pointer
strb r1,[r0,r10]
add r10,r10,#1
b loop
pointer:
mov r6,#0
mov r9,#0
sub r10,r10,#1
add r6,r10,#0
add r9,r10,#0
loop2:

@	putstr string
mov r11,#0
mov r12,#0
mov r9,#0
add r9,r10,#0
loop1: 
ldr r3,[r0,r11]
mov r12,#0
add r12,r11,#1
ldr r4,[r0,r12]
mov r5,r3
mov r3,r4
mov r4,r5
strb r3,[r0,r11]
strb r4,[r0,r12]
sub r9,r9,#1
cmp r9,#0
add r11,r11,#1
bne loop1
sub r10,r10,#1
sub r6,r6,#1
cmp r6,#0
bne loop2
	putstr string
@int sys_exit(int status)
	mov r0, #0      @ Return code
	mov r7, #1      @ sys_exit
	svc 0x00000000

