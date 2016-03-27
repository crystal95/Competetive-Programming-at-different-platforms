	.global	array
	.data
	.align	2
	.type	array, %object
	.size	array, 40
num1:
	.word 0x03
	.word 0x04
	.word 0x01
	.word 0x7FFFFFFE
	.word 0x80000000
	.word 0xFF
	.word 0xEF
	.word 0xFFFFFFFF
	.word 0x07
	.word 0x09
	.text
	.align	2
	.global	main
	.type	main, %function
main:
	@loading the address of the array num1 into register r4
	@ldr r4, .L6 @ Or This :  ldr r4,=num1
	@r4 has the address of the 1st word in num1 array which is 0x03
	mov r2,#0
	ldr r4,=num1
	mov r5,r4
	
	loop1:
	bl myScan
	cmp r1,#-1
	beq loopA
        add r2,r2,#1
        str r1,[r5]
	add r5,r5,#4
	b loop1
	
	loopA:
	mov r3,r2
	mov r5,r4
	ldr r8,[r4]
	loopAa:
	ldr r1,[r5]
	cmp r1,r8
	movle r8,r1
	add r5,r5,#4
	sub r3,r3,#1
	cmp r3,#0
	beq loopAb
	b loopAa
	loopAb:
	mov r1,r8
	bl myPrint
	bl loopB
	
	loopB:
	mov r3,r2
	mov r5,r4
	ldr r8,[r4]
	loopBa:
	ldr r1,[r5]
	cmp r1,r8
	movge r8,r1
	add r5,r5,#4
	sub r3,r3,#1
	cmp r3,#0
	beq loopBb
	b loopBa
	loopBb:
	mov r1,r8
	bl myPrint
	bl loopC

	loopC:
	mov r3,r2
	mov r5,r4
	mov r8,#0
	loopCa:
	ldr r1,[r5]
	add r8,r8,r1
	add r5,r5,#4
	sub r3,r3,#1
	cmp r3,#0
	beq loopCb
	b loopCa

	loopCb:
	mov r3,#0
	mov r1,r8
       loopDa:
       add r3,r3,#1
        sub r1,r1,r2
        cmp r1,r2
        blt loopDb
	b loopDa
	loopDb:
	mov r1,r3
	bl myPrint
	bl exit


.L6:
	.word num1
.global	myPrint
myPrint:
	@prints an integer present in r1
	stmfd	sp!,{r0,r1,r2,r3,r7, lr}
	add	r7, sp, #0
	adr 	r0, .LC0
	bl	printf
	mov	r0, #0
	ldmfd	sp!,{r0,r1,r2,r3,r7, pc}


.global myScan
myScan:
	@scans an integer and returns it in r1
	stmfd   sp!, {r0,r2,r3,r7, lr}
	sub 	sp, sp, #8
	add     r7, sp, #0
	adr     r0, .LC1
	add	r1, sp, #4
	bl      scanf
	ldr	r1, [sp, #4]
	mov     r0, #0
	add	sp, sp, #8
	ldmfd	sp!,{r0,r2,r3,r7, pc}


.LC0:
	.ascii	"%d\012\000"
	.align 2
.LC1:
	.ascii "%d\000"
	.align 2
