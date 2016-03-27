.text 
.global main
main:
cmp r3, r4
ble .Lforward
sub r0, r1, r2
add r0, r1, r2
sub r0, r1, r2
sub r0, r1, r2
.Lforward:	sub r0, r1, r2
sub r0, r1, r2
