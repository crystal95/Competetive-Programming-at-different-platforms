.text 
.global main
main:
cmp r3, r4
.Lbackward:	sub r0, r1, r2
sub r1, r1, r2
add r2, r1, r2
sub r3, r1, r2
sub r4, r1, r2
beq .Lbackward
sub r5, r1, r2
sub r6, r1, r2


