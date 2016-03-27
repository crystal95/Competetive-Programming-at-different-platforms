.include "io.h"

.extern initializeData
.extern printData
.equ size, 10
.data
.align 4
array: .skip size*4      @allocate memory for an array of words

.text
.global main

main:
ldr r0, =array
mov r1, #size
bl initializeData
ldr r0, =array
mov r1, #size
mov r4,r0
mov r3,#0
mov r6,r1

loop1:
ldr r7,[r4]
add r3,r3,r7
str r3,[r4]
add r4,r4,#4
sub r6,r6,#1
cmp r6,#0
bleq loop2
bl loop1
loop2:
bl printData


@ code for prefix sum goes here	

@int sys_exit(int status)
	mov r0, #0      @ Return code
	mov r7, #1      @ sys_exit
	svc 0x00000000

