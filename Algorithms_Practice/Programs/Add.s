	.global	main
	.type	main, %function
main:
	
	@start you code here
	
	bl myScan               		@Scan Number A               
	mov r2,r1				@Mov Value of A into r2 and scanning result will be in r1
	bl myScan				@Scan Number B
	mov r3,r1				@Mov Value of B into r3
	add r1,r2,r3
	bl myPrint				@print Result A+B  
mov r1,#10
	bl myPrintch
	bl exit
	@end you code here

.global putstring
putstring:                                 @print string 
	    stmfd     r13!, {r4-r12, lr}
	    mov       r1, r0
	    mov       r0, #4
	    swi       0x123456
	    ldmfd     r13!, {r4-r12, pc}
.global	myPrint
myPrint:                                    @print integer value of r1
	@prints an integer present in r1
	stmfd	sp!,{r0,r1,r2,r3,r7, lr}
	add	r7, sp, #0
	adr 	r0, .LC0
	bl	printf
	mov	r0, #0
	ldmfd	sp!,{r0,r1,r2,r3,r7, pc}

.global	myPrintch
myPrintch:              @print character value of r1
	@prints an character present in r1
	stmfd	sp!,{r0,r1,r2,r3,r7, lr}
	add	r7, sp, #0
	adr 	r0, .LC2
	bl	printf
	mov	r0, #0
	ldmfd	sp!,{r0,r1,r2,r3,r7, pc}

.global myScan
myScan:			@scan integer or character  in r1
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


.LC0:                 @print int
	.ascii	"%d\012\000"
	.align 2
.LC1: 			@scan int
	.ascii "%d\000"
	.align 2
.LC2:
	.ascii	"%c\012\000"   @print char
	.align 2


