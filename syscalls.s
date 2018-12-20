	.global _pixel
	.global _GetTicks

_pixel:
	mov.l    syscall_table, r2
	mov.l    1f, r0
	jmp      @r2
	nop
1:
	.long    0x0146

_GetTicks:
	mov.l    syscall_table, r2
	mov.l    1f, r0
	jmp      @r2
	nop
1:
	.long    0x03B

syscall_table:
	.long    0x80010070