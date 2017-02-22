	.file	"WordCount.cpp"
	.section	.text._ZStanSt13_Ios_FmtflagsS_,"axG",@progbits,_ZStanSt13_Ios_FmtflagsS_,comdat
	.weak	_ZStanSt13_Ios_FmtflagsS_
	.type	_ZStanSt13_Ios_FmtflagsS_, @function
_ZStanSt13_Ios_FmtflagsS_:
.LFB1023:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	andl	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1023:
	.size	_ZStanSt13_Ios_FmtflagsS_, .-_ZStanSt13_Ios_FmtflagsS_
	.section	.text._ZStorSt13_Ios_FmtflagsS_,"axG",@progbits,_ZStorSt13_Ios_FmtflagsS_,comdat
	.weak	_ZStorSt13_Ios_FmtflagsS_
	.type	_ZStorSt13_Ios_FmtflagsS_, @function
_ZStorSt13_Ios_FmtflagsS_:
.LFB1024:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	orl	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1024:
	.size	_ZStorSt13_Ios_FmtflagsS_, .-_ZStorSt13_Ios_FmtflagsS_
	.section	.text._ZStcoSt13_Ios_Fmtflags,"axG",@progbits,_ZStcoSt13_Ios_Fmtflags,comdat
	.weak	_ZStcoSt13_Ios_Fmtflags
	.type	_ZStcoSt13_Ios_Fmtflags, @function
_ZStcoSt13_Ios_Fmtflags:
.LFB1026:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	notl	%eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1026:
	.size	_ZStcoSt13_Ios_Fmtflags, .-_ZStcoSt13_Ios_Fmtflags
	.section	.text._ZStoRRSt13_Ios_FmtflagsS_,"axG",@progbits,_ZStoRRSt13_Ios_FmtflagsS_,comdat
	.weak	_ZStoRRSt13_Ios_FmtflagsS_
	.type	_ZStoRRSt13_Ios_FmtflagsS_, @function
_ZStoRRSt13_Ios_FmtflagsS_:
.LFB1027:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	-12(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	_ZStorSt13_Ios_FmtflagsS_
	movq	-8(%rbp), %rdx
	movl	%eax, (%rdx)
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1027:
	.size	_ZStoRRSt13_Ios_FmtflagsS_, .-_ZStoRRSt13_Ios_FmtflagsS_
	.section	.text._ZStaNRSt13_Ios_FmtflagsS_,"axG",@progbits,_ZStaNRSt13_Ios_FmtflagsS_,comdat
	.weak	_ZStaNRSt13_Ios_FmtflagsS_
	.type	_ZStaNRSt13_Ios_FmtflagsS_, @function
_ZStaNRSt13_Ios_FmtflagsS_:
.LFB1028:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	-12(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	_ZStanSt13_Ios_FmtflagsS_
	movq	-8(%rbp), %rdx
	movl	%eax, (%rdx)
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1028:
	.size	_ZStaNRSt13_Ios_FmtflagsS_, .-_ZStaNRSt13_Ios_FmtflagsS_
	.section	.text._ZStorSt13_Ios_OpenmodeS_,"axG",@progbits,_ZStorSt13_Ios_OpenmodeS_,comdat
	.weak	_ZStorSt13_Ios_OpenmodeS_
	.type	_ZStorSt13_Ios_OpenmodeS_, @function
_ZStorSt13_Ios_OpenmodeS_:
.LFB1031:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	orl	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1031:
	.size	_ZStorSt13_Ios_OpenmodeS_, .-_ZStorSt13_Ios_OpenmodeS_
	.section	.text._ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_,"axG",@progbits,_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_,comdat
	.align 2
	.weak	_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
	.type	_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_, @function
_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_:
.LFB1055:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	movq	-24(%rbp), %rax
	movl	24(%rax), %eax
	movl	%eax, -4(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, %edi
	call	_ZStcoSt13_Ios_Fmtflags
	movq	-24(%rbp), %rdx
	addq	$24, %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZStaNRSt13_Ios_FmtflagsS_
	movl	-32(%rbp), %edx
	movl	-28(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	_ZStanSt13_Ios_FmtflagsS_
	movq	-24(%rbp), %rdx
	addq	$24, %rdx
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZStoRRSt13_Ios_FmtflagsS_
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1055:
	.size	_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_, .-_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
	.section	.text._ZSt5fixedRSt8ios_base,"axG",@progbits,_ZSt5fixedRSt8ios_base,comdat
	.weak	_ZSt5fixedRSt8ios_base
	.type	_ZSt5fixedRSt8ios_base, @function
_ZSt5fixedRSt8ios_base:
.LFB1085:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$260, %edx
	movl	$4, %esi
	movq	%rax, %rdi
	call	_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1085:
	.size	_ZSt5fixedRSt8ios_base, .-_ZSt5fixedRSt8ios_base
	.section	.text._ZSt12setprecisioni,"axG",@progbits,_ZSt12setprecisioni,comdat
	.weak	_ZSt12setprecisioni
	.type	_ZSt12setprecisioni, @function
_ZSt12setprecisioni:
.LFB1878:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1878:
	.size	_ZSt12setprecisioni, .-_ZSt12setprecisioni
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.text
	.globl	_Z8fileNamePcS_S_i
	.type	_Z8fileNamePcS_S_i, @function
_Z8fileNamePcS_S_i:
.LFB3536:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movl	%ecx, -44(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L20
.L21:
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	-40(%rbp), %rax
	addq	%rax, %rdx
	movl	-8(%rbp), %eax
	movslq	%eax, %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	addl	$1, -8(%rbp)
.L20:
	movl	-8(%rbp), %eax
	cmpl	-44(%rbp), %eax
	jl	.L21
	movl	-44(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L22
.L23:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-40(%rbp), %rax
	addq	%rax, %rdx
	movl	-44(%rbp), %eax
	movl	-4(%rbp), %ecx
	subl	%eax, %ecx
	movl	%ecx, %eax
	movslq	%eax, %rcx
	movq	-32(%rbp), %rax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	addl	$1, -4(%rbp)
.L22:
	movl	-44(%rbp), %eax
	addl	$4, %eax
	cmpl	-4(%rbp), %eax
	jg	.L23
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3536:
	.size	_Z8fileNamePcS_S_i, .-_Z8fileNamePcS_S_i
	.section	.rodata
.LC0:
	.string	"Error: missing input file\n"
	.align 8
.LC1:
	.string	"Error: Invalid file extention\n"
	.align 8
.LC2:
	.string	"Error: The file did not open!\n"
	.align 8
.LC3:
	.string	"There is an Error in the output file"
.LC5:
	.string	"Number of words: "
.LC6:
	.string	"Longest word: "
.LC7:
	.string	"Shortest word: "
.LC8:
	.string	"Average word length: "
.LC9:
	.string	"Number of occurences of "
.LC10:
	.string	": "
	.text
	.globl	main
	.type	main, @function
main:
.LFB3537:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA3537
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$1608, %rsp
	.cfi_offset 15, -24
	.cfi_offset 14, -32
	.cfi_offset 13, -40
	.cfi_offset 12, -48
	.cfi_offset 3, -56
	movl	%edi, -1588(%rbp)
	movq	%rsi, -1600(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -56(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, -1608(%rbp)
	cmpl	$1, -1588(%rbp)
	jg	.L25
	movl	$.LC0, %esi
	movl	$_ZSt4cerr, %edi
.LEHB0:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$-1, %ebx
	movl	$0, %eax
	jmp	.L26
.L25:
	leaq	-1424(%rbp), %rdx
	movl	$0, %eax
	movl	$12, %ecx
	movq	%rdx, %rdi
	rep stosq
	movq	%rdi, %rdx
	movl	%eax, (%rdx)
	addq	$4, %rdx
	movq	$0, -1456(%rbp)
	movw	$0, -1448(%rbp)
	leaq	-1312(%rbp), %rdx
	movl	$0, %eax
	movl	$12, %ecx
	movq	%rdx, %rdi
	rep stosq
	movq	%rdi, %rdx
	movl	%eax, (%rdx)
	addq	$4, %rdx
	leaq	-1200(%rbp), %rdx
	movl	$0, %eax
	movl	$12, %ecx
	movq	%rdx, %rdi
	rep stosq
	movq	%rdi, %rdx
	movl	%eax, (%rdx)
	addq	$4, %rdx
	movb	$46, -1472(%rbp)
	movb	$116, -1471(%rbp)
	movb	$120, -1470(%rbp)
	movb	$116, -1469(%rbp)
	movb	$0, -1468(%rbp)
	movb	$46, -1488(%rbp)
	movb	$97, -1487(%rbp)
	movb	$110, -1486(%rbp)
	movb	$108, -1485(%rbp)
	movl	$0, -1576(%rbp)
	jmp	.L27
.L29:
	movq	-1600(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rdx
	movl	-1576(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movl	-1576(%rbp), %eax
	cltq
	movb	%dl, -1424(%rbp,%rax)
	addl	$1, -1576(%rbp)
.L27:
	movq	-1600(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rdx
	movl	-1576(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$46, %al
	je	.L28
	movq	-1600(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rdx
	movl	-1576(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L29
.L28:
	movq	-1600(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rdx
	movl	-1576(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L30
	movl	-1576(%rbp), %ecx
	leaq	-1312(%rbp), %rdx
	leaq	-1472(%rbp), %rsi
	leaq	-1424(%rbp), %rax
	movq	%rax, %rdi
	call	_Z8fileNamePcS_S_i
	jmp	.L31
.L30:
	movl	-1576(%rbp), %eax
	movl	%eax, -1580(%rbp)
	jmp	.L32
.L33:
	movl	-1576(%rbp), %eax
	movl	-1580(%rbp), %edx
	movl	%edx, %ecx
	subl	%eax, %ecx
	movq	-1600(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rdx
	movl	-1580(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movslq	%ecx, %rax
	movb	%dl, -1456(%rbp,%rax)
	addl	$1, -1580(%rbp)
.L32:
	movq	-1600(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rdx
	movl	-1580(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L33
	leaq	-1472(%rbp), %rdx
	leaq	-1456(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp
	testl	%eax, %eax
	jne	.L34
	movl	-1576(%rbp), %ecx
	leaq	-1312(%rbp), %rdx
	leaq	-1472(%rbp), %rsi
	leaq	-1424(%rbp), %rax
	movq	%rax, %rdi
	call	_Z8fileNamePcS_S_i
	jmp	.L31
.L34:
	movl	$.LC1, %esi
	movl	$_ZSt4cerr, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$-1, %ebx
	movl	$0, %eax
	jmp	.L26
.L31:
	movl	-1576(%rbp), %ecx
	leaq	-1200(%rbp), %rdx
	leaq	-1488(%rbp), %rsi
	leaq	-1424(%rbp), %rax
	movq	%rax, %rdi
	call	_Z8fileNamePcS_S_i
	movb	$0, -1581(%rbp)
	movl	-1588(%rbp), %eax
	subl	$2, %eax
	movl	%eax, -1524(%rbp)
	movl	-1524(%rbp), %eax
	cltq
	subq	$1, %rax
	movq	%rax, -1520(%rbp)
	movl	-1524(%rbp), %eax
	cltq
	movq	%rax, -1632(%rbp)
	movq	$0, -1624(%rbp)
	movl	-1524(%rbp), %eax
	cltq
	movq	%rax, -1648(%rbp)
	movq	$0, -1640(%rbp)
	movl	-1524(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	3(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ebx
	movl	$0, %edx
	divq	%rbx
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -1512(%rbp)
	movb	$1, -1581(%rbp)
	movl	-1524(%rbp), %eax
	cltq
	subq	$1, %rax
	movq	%rax, -1504(%rbp)
	movl	-1524(%rbp), %eax
	cltq
	movq	%rax, %r14
	movl	$0, %r15d
	imulq	$112, %r15, %rdx
	imulq	$0, %r14, %rax
	leaq	(%rdx,%rax), %rcx
	movl	$112, %eax
	mulq	%r14
	addq	%rdx, %rcx
	movq	%rcx, %rdx
	movl	-1524(%rbp), %eax
	cltq
	addq	%rax, %rax
	movl	-1524(%rbp), %eax
	cltq
	movq	%rax, %r12
	movl	$0, %r13d
	imulq	$112, %r13, %rdx
	imulq	$0, %r12, %rax
	leaq	(%rdx,%rax), %rcx
	movl	$112, %eax
	mulq	%r12
	addq	%rdx, %rcx
	movq	%rcx, %rdx
	movl	-1524(%rbp), %eax
	cltq
	addq	%rax, %rax
	leaq	0(,%rax,8), %rdx
	subq	%rax, %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ebx
	movl	$0, %edx
	divq	%rbx
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$0, %rax
	movq	%rax, -1496(%rbp)
	movl	-1588(%rbp), %eax
	subl	$2, %eax
	testl	%eax, %eax
	jle	.L35
	movl	$0, -1572(%rbp)
	jmp	.L36
.L39:
	movq	-1512(%rbp), %rax
	movl	-1572(%rbp), %edx
	movslq	%edx, %rdx
	movl	$0, (%rax,%rdx,4)
	movl	-1572(%rbp), %eax
	cltq
	addq	$2, %rax
	leaq	0(,%rax,8), %rdx
	movq	-1600(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rcx
	movl	-1572(%rbp), %eax
	cltq
	addq	%rax, %rax
	leaq	0(,%rax,8), %rdx
	subq	%rax, %rdx
	movq	-1496(%rbp), %rax
	addq	%rdx, %rax
	movl	$14, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	strncpy
	movl	$0, -1568(%rbp)
	jmp	.L37
.L38:
	movq	-1496(%rbp), %rdx
	movl	-1568(%rbp), %eax
	movslq	%eax, %rcx
	movl	-1572(%rbp), %eax
	cltq
	addq	%rax, %rax
	leaq	0(,%rax,8), %rsi
	subq	%rax, %rsi
	movq	%rsi, %rax
	addq	%rcx, %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	tolower
	movl	%eax, %edx
	movq	-1496(%rbp), %rcx
	movl	-1568(%rbp), %eax
	movslq	%eax, %rsi
	movl	-1572(%rbp), %eax
	cltq
	addq	%rax, %rax
	leaq	0(,%rax,8), %rdi
	subq	%rax, %rdi
	movq	%rdi, %rax
	addq	%rsi, %rax
	addq	%rcx, %rax
	movb	%dl, (%rax)
	addl	$1, -1568(%rbp)
.L37:
	movq	-1496(%rbp), %rdx
	movl	-1568(%rbp), %eax
	movslq	%eax, %rcx
	movl	-1572(%rbp), %eax
	cltq
	addq	%rax, %rax
	leaq	0(,%rax,8), %rsi
	subq	%rax, %rsi
	movq	%rsi, %rax
	addq	%rcx, %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L38
	addl	$1, -1572(%rbp)
.L36:
	movl	-1572(%rbp), %eax
	cmpl	-1524(%rbp), %eax
	jl	.L39
.L35:
	movq	-1496(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-576(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1Ev
.LEHE0:
	leaq	-1312(%rbp), %rcx
	leaq	-576(%rbp), %rax
	movl	$8, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB1:
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
	leaq	-576(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEE7is_openEv
	xorl	$1, %eax
	testb	%al, %al
	je	.L40
	movl	$.LC2, %esi
	movl	$_ZSt4cerr, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$0, %ebx
	movl	$0, %r12d
	jmp	.L41
.L40:
	leaq	-1088(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1Ev
.LEHE1:
	movl	$32, %esi
	movl	$16, %edi
	call	_ZStorSt13_Ios_OpenmodeS_
	movl	%eax, %edx
	leaq	-1200(%rbp), %rcx
	leaq	-1088(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB2:
	call	_ZNSt14basic_ofstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
	leaq	-1088(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14basic_ofstreamIcSt11char_traitsIcEE7is_openEv
	xorl	$1, %eax
	testb	%al, %al
	je	.L42
	movl	$.LC3, %esi
	movl	$_ZSt4cerr, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.L42:
	movl	$0, -1564(%rbp)
	movl	$0, -1560(%rbp)
	movl	$0, -1556(%rbp)
	movl	.LC4(%rip), %eax
	movl	%eax, -1552(%rbp)
	jmp	.L43
.L62:
	movq	$0, -1440(%rbp)
	movl	$0, -1432(%rbp)
	movw	$0, -1428(%rbp)
	movl	$0, -1548(%rbp)
	jmp	.L44
.L48:
	cmpl	$14, -1548(%rbp)
	jne	.L45
	jmp	.L46
.L45:
	movzbl	-1582(%rbp), %eax
	cmpb	$64, %al
	jle	.L47
	movzbl	-1582(%rbp), %eax
	cmpb	$90, %al
	jg	.L47
	movl	-1548(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -1548(%rbp)
	movzbl	-1582(%rbp), %edx
	addl	$32, %edx
	cltq
	movb	%dl, -1440(%rbp,%rax)
	jmp	.L44
.L47:
	movzbl	-1582(%rbp), %eax
	cmpb	$96, %al
	jle	.L46
	movzbl	-1582(%rbp), %eax
	cmpb	$122, %al
	jg	.L46
	movl	-1548(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -1548(%rbp)
	movzbl	-1582(%rbp), %edx
	cltq
	movb	%dl, -1440(%rbp,%rax)
.L44:
	leaq	-1582(%rbp), %rdx
	leaq	-576(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSi3getERc
	movq	(%rax), %rdx
	subq	$24, %rdx
	movq	(%rdx), %rdx
	addq	%rdx, %rax
	movq	%rax, %rdi
	call	_ZNKSt9basic_iosIcSt11char_traitsIcEEcvPvEv
	testq	%rax, %rax
	setne	%al
	testb	%al, %al
	jne	.L48
.L46:
	movzbl	-1440(%rbp), %eax
	testb	%al, %al
	je	.L43
	movl	$0, -1544(%rbp)
	jmp	.L50
.L58:
	movl	$0, -1540(%rbp)
	jmp	.L51
.L57:
	movl	$0, -1536(%rbp)
	movl	$1, -1532(%rbp)
	jmp	.L52
.L55:
	movl	-1536(%rbp), %eax
	movl	-1540(%rbp), %edx
	addl	%edx, %eax
	cltq
	movzbl	-1440(%rbp,%rax), %edx
	movq	-1496(%rbp), %rcx
	movl	-1536(%rbp), %eax
	movslq	%eax, %rsi
	movl	-1544(%rbp), %eax
	cltq
	addq	%rax, %rax
	leaq	0(,%rax,8), %rdi
	subq	%rax, %rdi
	movq	%rdi, %rax
	addq	%rsi, %rax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	je	.L53
	movl	$0, -1532(%rbp)
.L53:
	addl	$1, -1536(%rbp)
.L52:
	movq	-1496(%rbp), %rdx
	movl	-1536(%rbp), %eax
	movslq	%eax, %rcx
	movl	-1544(%rbp), %eax
	cltq
	addq	%rax, %rax
	leaq	0(,%rax,8), %rsi
	subq	%rax, %rsi
	movq	%rsi, %rax
	addq	%rcx, %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L54
	cmpl	$1, -1532(%rbp)
	je	.L55
.L54:
	cmpl	$1, -1532(%rbp)
	jne	.L56
	movq	-1512(%rbp), %rax
	movl	-1544(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	leal	1(%rax), %ecx
	movq	-1512(%rbp), %rax
	movl	-1544(%rbp), %edx
	movslq	%edx, %rdx
	movl	%ecx, (%rax,%rdx,4)
.L56:
	addl	$1, -1540(%rbp)
.L51:
	movl	-1540(%rbp), %eax
	cltq
	movzbl	-1440(%rbp,%rax), %eax
	testb	%al, %al
	jne	.L57
	addl	$1, -1544(%rbp)
.L50:
	movl	-1544(%rbp), %eax
	cmpl	-1524(%rbp), %eax
	jl	.L58
	addl	$1, -1564(%rbp)
	cmpl	$1, -1564(%rbp)
	jne	.L59
	movl	-1548(%rbp), %eax
	movl	%eax, -1560(%rbp)
	movl	-1548(%rbp), %eax
	movl	%eax, -1556(%rbp)
.L59:
	movl	-1548(%rbp), %eax
	cmpl	-1560(%rbp), %eax
	jle	.L60
	movl	-1548(%rbp), %eax
	movl	%eax, -1560(%rbp)
	jmp	.L61
.L60:
	movl	-1548(%rbp), %eax
	cmpl	-1556(%rbp), %eax
	jge	.L61
	movl	-1548(%rbp), %eax
	movl	%eax, -1556(%rbp)
.L61:
	cvtsi2ss	-1548(%rbp), %xmm0
	movss	-1552(%rbp), %xmm1
	addss	%xmm1, %xmm0
	movss	%xmm0, -1552(%rbp)
.L43:
	leaq	-576(%rbp), %rax
	addq	$256, %rax
	movq	%rax, %rdi
	call	_ZNKSt9basic_iosIcSt11char_traitsIcEE3eofEv
	xorl	$1, %eax
	testb	%al, %al
	jne	.L62
	cvtsi2ss	-1564(%rbp), %xmm0
	movss	-1552(%rbp), %xmm1
	divss	%xmm0, %xmm1
	movaps	%xmm1, %xmm0
	movss	%xmm0, -1552(%rbp)
	leaq	-1088(%rbp), %rax
	movl	$.LC5, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-1564(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-1088(%rbp), %rax
	movl	$.LC6, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-1560(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-1088(%rbp), %rax
	movl	$.LC7, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-1556(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$2, %edi
	call	_ZSt12setprecisioni
	movl	%eax, %edx
	leaq	-1088(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
	movl	$_ZSt5fixedRSt8ios_base, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSt8ios_baseS0_E
	movl	$.LC8, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-1552(%rbp), %eax
	movl	%eax, -1632(%rbp)
	movss	-1632(%rbp), %xmm0
	movq	%rdx, %rdi
	call	_ZNSolsEf
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, -1528(%rbp)
	jmp	.L63
.L64:
	movq	-1512(%rbp), %rax
	movl	-1528(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %ebx
	movl	-1528(%rbp), %eax
	cltq
	addq	%rax, %rax
	leaq	0(,%rax,8), %rdx
	subq	%rax, %rdx
	movq	-1496(%rbp), %rax
	leaq	(%rdx,%rax), %r12
	leaq	-1088(%rbp), %rax
	movl	$.LC9, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%r12, %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$.LC10, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	addl	$1, -1528(%rbp)
.L63:
	movl	-1528(%rbp), %eax
	cmpl	-1524(%rbp), %eax
	jl	.L64
	leaq	-576(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEE5closeEv
	leaq	-1088(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14basic_ofstreamIcSt11char_traitsIcEE5closeEv
.LEHE2:
	leaq	-1088(%rbp), %rax
	movq	%rax, %rdi
.LEHB3:
	call	_ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
.LEHE3:
	movl	$1, %r12d
	movl	-1612(%rbp), %ebx
.L41:
	leaq	-576(%rbp), %rax
	movq	%rax, %rdi
.LEHB4:
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
.LEHE4:
	cmpl	$1, %r12d
	je	.L77
	movl	$0, %eax
	jmp	.L26
.L77:
	nop
	movl	$1, %eax
.L26:
	movq	-1608(%rbp), %rsp
	cmpl	$1, %eax
	jne	.L68
	movl	$0, %ebx
.L68:
	movl	%ebx, %eax
	movq	-56(%rbp), %rbx
	xorq	%fs:40, %rbx
	je	.L72
	jmp	.L76
.L74:
	movq	%rax, %rbx
	leaq	-1088(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
	jmp	.L71
.L73:
	movq	%rax, %rbx
.L71:
	leaq	-576(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB5:
	call	_Unwind_Resume
.LEHE5:
.L76:
	call	__stack_chk_fail
.L72:
	leaq	-40(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3537:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA3537:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3537-.LLSDACSB3537
.LLSDACSB3537:
	.uleb128 .LEHB0-.LFB3537
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB3537
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L73-.LFB3537
	.uleb128 0
	.uleb128 .LEHB2-.LFB3537
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L74-.LFB3537
	.uleb128 0
	.uleb128 .LEHB3-.LFB3537
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L73-.LFB3537
	.uleb128 0
	.uleb128 .LEHB4-.LFB3537
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB5-.LFB3537
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE3537:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB3619:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L78
	cmpl	$65535, -8(%rbp)
	jne	.L78
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L78:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3619:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z8fileNamePcS_S_i, @function
_GLOBAL__sub_I__Z8fileNamePcS_S_i:
.LFB3620:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3620:
	.size	_GLOBAL__sub_I__Z8fileNamePcS_S_i, .-_GLOBAL__sub_I__Z8fileNamePcS_S_i
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z8fileNamePcS_S_i
	.section	.rodata
	.align 4
.LC4:
	.long	0
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
