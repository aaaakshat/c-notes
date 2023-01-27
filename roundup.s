	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 12, 3
	.globl	_toBinary                       ; -- Begin function toBinary
	.p2align	2
_toBinary:                              ; @toBinary
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	w0, [x29, #-4]
	mov	w8, #8
	stur	w8, [x29, #-8]
	ldursw	x9, [x29, #-8]
	mov	x8, #1
	mul	x0, x8, x9
	bl	_malloc
	str	x0, [sp, #16]
	str	wzr, [sp, #12]
	ldur	w9, [x29, #-8]
	mov	w8, #1
	subs	w9, w9, #1
	lsl	w8, w8, w9
	str	w8, [sp, #8]
	b	LBB0_1
LBB0_1:                                 ; =>This Inner Loop Header: Depth=1
	ldr	w8, [sp, #8]
	subs	w8, w8, #0
	b.ls	LBB0_4
	b	LBB0_2
LBB0_2:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	w10, [x29, #-4]
	ldr	w11, [sp, #8]
	mov	w9, #48
	mov	w8, #49
	ands	w10, w10, w11
	csel	w8, w8, w9, ne
	ldr	x9, [sp, #16]
	ldrsw	x10, [sp, #12]
	mov	x11, x10
	add	w11, w11, #1
	str	w11, [sp, #12]
	strb	w8, [x9, x10]
	b	LBB0_3
LBB0_3:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #8]
	mov	w9, #2
	udiv	w8, w8, w9
	str	w8, [sp, #8]
	b	LBB0_1
LBB0_4:
	ldr	x8, [sp, #16]
	ldrsw	x9, [sp, #12]
	add	x8, x8, x9
	strb	wzr, [x8]
	ldr	x0, [sp, #16]
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3                               ; -- Begin function main
lCPI1_0:
	.quad	0x412e848000000000              ; double 1.0E+6
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #96
	stp	x29, x30, [sp, #80]             ; 16-byte Folded Spill
	add	x29, sp, #80
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	mov	x9, sp
	sub	x8, x29, #8
	str	x8, [x9]
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_scanf
	ldur	w8, [x29, #-8]
	add	w8, w8, #7
	stur	w8, [x29, #-12]
	mov	w8, #-8
	stur	w8, [x29, #-16]
	ldur	w8, [x29, #-12]
	ldur	w9, [x29, #-16]
	and	w8, w8, w9
	stur	w8, [x29, #-20]
	ldur	w9, [x29, #-8]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	bl	_printf
	ldur	w0, [x29, #-8]
	bl	_toBinary
	mov	x8, sp
	str	x0, [x8]
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
	bl	_printf
	ldur	w9, [x29, #-12]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.4@PAGE
	add	x0, x0, l_.str.4@PAGEOFF
	bl	_printf
	ldur	w0, [x29, #-12]
	bl	_toBinary
	mov	x8, x0
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	mov	x9, sp
	str	x8, [x9]
	bl	_printf
	ldur	w9, [x29, #-16]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.5@PAGE
	add	x0, x0, l_.str.5@PAGEOFF
	bl	_printf
	ldur	w0, [x29, #-16]
	bl	_toBinary
	mov	x8, x0
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	mov	x9, sp
	str	x8, [x9]
	bl	_printf
	ldur	w9, [x29, #-20]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.6@PAGE
	add	x0, x0, l_.str.6@PAGEOFF
	bl	_printf
	ldur	w0, [x29, #-20]
	bl	_toBinary
	mov	x8, x0
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	mov	x9, sp
	str	x8, [x9]
	bl	_printf
	bl	_clock
	stur	x0, [x29, #-32]
	str	wzr, [sp, #32]
	b	LBB1_1
LBB1_1:                                 ; =>This Inner Loop Header: Depth=1
	ldr	w8, [sp, #32]
	mov	w9, #51712
	movk	w9, #15258, lsl #16
	subs	w8, w8, w9
	b.ge	LBB1_4
	b	LBB1_2
LBB1_2:                                 ;   in Loop: Header=BB1_1 Depth=1
	ldr	w8, [sp, #32]
	and	w8, w8, #0xfffffff8
	str	w8, [sp, #36]
	b	LBB1_3
LBB1_3:                                 ;   in Loop: Header=BB1_1 Depth=1
	ldr	w8, [sp, #32]
	add	w8, w8, #1
	str	w8, [sp, #32]
	b	LBB1_1
LBB1_4:
	bl	_clock
	str	x0, [sp, #40]
	ldr	x8, [sp, #40]
	ldur	x9, [x29, #-32]
	subs	x8, x8, x9
	ucvtf	d0, x8
	adrp	x8, lCPI1_0@PAGE
	ldr	d1, [x8, lCPI1_0@PAGEOFF]
	fdiv	d0, d0, d1
	str	d0, [sp, #24]
	ldr	d0, [sp, #24]
	mov	x8, sp
	str	d0, [x8]
	adrp	x0, l_.str.7@PAGE
	add	x0, x0, l_.str.7@PAGEOFF
	bl	_printf
	bl	_clock
	stur	x0, [x29, #-32]
	str	wzr, [sp, #20]
	b	LBB1_5
LBB1_5:                                 ; =>This Inner Loop Header: Depth=1
	ldr	w8, [sp, #20]
	mov	w9, #51712
	movk	w9, #15258, lsl #16
	subs	w8, w8, w9
	b.ge	LBB1_8
	b	LBB1_6
LBB1_6:                                 ;   in Loop: Header=BB1_5 Depth=1
	ldr	w9, [sp, #20]
	mov	w8, #8
	sdiv	w10, w9, w8
	mul	w10, w10, w8
	subs	w9, w9, w10
	subs	w8, w8, w9
	ldr	w9, [sp, #20]
	add	w8, w8, w9
	str	w8, [sp, #36]
	b	LBB1_7
LBB1_7:                                 ;   in Loop: Header=BB1_5 Depth=1
	ldr	w8, [sp, #20]
	add	w8, w8, #1
	str	w8, [sp, #20]
	b	LBB1_5
LBB1_8:
	bl	_clock
	str	x0, [sp, #40]
	ldr	x8, [sp, #40]
	ldur	x9, [x29, #-32]
	subs	x8, x8, x9
	ucvtf	d0, x8
	adrp	x8, lCPI1_0@PAGE
	ldr	d1, [x8, lCPI1_0@PAGEOFF]
	fdiv	d0, d0, d1
	str	d0, [sp, #24]
	ldr	d0, [sp, #24]
	mov	x8, sp
	str	d0, [x8]
	adrp	x0, l_.str.8@PAGE
	add	x0, x0, l_.str.8@PAGEOFF
	bl	_printf
	ldur	w0, [x29, #-4]
	ldp	x29, x30, [sp, #80]             ; 16-byte Folded Reload
	add	sp, sp, #96
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"Enter a number to round\n"

l_.str.1:                               ; @.str.1
	.asciz	"%d"

l_.str.2:                               ; @.str.2
	.asciz	"inp: %d\n"

l_.str.3:                               ; @.str.3
	.asciz	"%s\n"

l_.str.4:                               ; @.str.4
	.asciz	"add: %d\n"

l_.str.5:                               ; @.str.5
	.asciz	"mask: %d\n"

l_.str.6:                               ; @.str.6
	.asciz	"round: %d\n"

l_.str.7:                               ; @.str.7
	.asciz	"optimized time : %f\n"

l_.str.8:                               ; @.str.8
	.asciz	"naive time: %f\n"

.subsections_via_symbols
