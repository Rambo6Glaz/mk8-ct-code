	.global kern_write
kern_write:
	stwu %r1, -0x10(%r1)
	mflr %r0
	stw %r30, 8(%r1)
	mr %r30, %r4
	stw %r31, 12(%r1)
	mr %r31, %r3
	stw %r0, 20(%r1)
	li %r3, 1
	li %r4, 0
	mr %r5, %r30
	li %r6, 0
	li %r7, 0
	lis %r8, 1
	mr %r9, %r31
	mr %r30, %r1
	li %r0, 0x3500
	sc
	nop
	mr %r1, %r30
	lwz %r0, 20(%r1)
	lwz %r30, 8(%r1)
	lwz %r31, 12(%r1)
	mtlr %r0
	addi %r1, %r1, 0x10
	blr	
	
	.globl GetMemoryRegisters
GetMemoryRegisters:
	li %r0, 0x0900
	sc
	blr

	.globl WriteKernelPhysical
WriteKernelPhysical:
	li %r0, 0x0700
	sc
	blr

	.globl ReadKernelPhysical
ReadKernelPhysical:
	li %r0, 0x2100
	sc
	blr


	.globl SetSegmentRegister
SetSegmentRegister:
	li %r0, 0x2200
	sc
	blr

	.globl __SetSegmentRegister
__SetSegmentRegister:
	sync
	eieio
	isync
	mtsrin %r3, %r4
	isync
	mfsrin %r5, %r4
	mr %r3, %r5
	isync
	blr

	.globl __OSGetDABR
__OSGetDABR:
	mfspr %r3, 1015
	blr

	.globl OSGetDABR
OSGetDABR:
	li %r0, 0x2300
	sc
	blr