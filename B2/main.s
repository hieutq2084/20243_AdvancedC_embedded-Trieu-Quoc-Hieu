	.file	"main.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC1:
	.ascii " Gia tri pi ban dau: %f\12\0"
.LC2:
	.ascii "Trieu Quoc Hieu\0"
.LC3:
	.ascii "max: %d\12\0"
.LC4:
	.ascii "min: %d\12\0"
.LC5:
	.ascii "Khong co su lieu\0"
.LC6:
	.ascii "khong co\0"
.LC7:
	.ascii "Gia tri pi ve sau: %d\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$96, %rsp
	.seh_stackalloc	96
	.seh_endprologue
	call	__main
	movq	.LC0(%rip), %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm1
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rcx
	call	printf
	leaq	.LC2(%rip), %rcx
	call	puts
	movl	$1, -64(%rbp)
	movl	$2, -60(%rbp)
	movl	$3, -56(%rbp)
	movl	$4, -52(%rbp)
	movl	$5, -48(%rbp)
	movl	$6, -44(%rbp)
	movl	$7, -40(%rbp)
	movl	$89, -36(%rbp)
	movl	$0, -32(%rbp)
	movl	$-1, -28(%rbp)
	movl	$893, -24(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	$11, -16(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L2
.L5:
	movl	-12(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	cmpl	%eax, -8(%rbp)
	jle	.L3
	movl	-12(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	movl	%eax, -8(%rbp)
.L3:
	movl	-12(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	cmpl	%eax, -4(%rbp)
	jge	.L4
	movl	-12(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	movl	%eax, -4(%rbp)
.L4:
	addl	$1, -12(%rbp)
.L2:
	movl	-12(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jl	.L5
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC3(%rip), %rcx
	call	printf
	movl	-8(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC4(%rip), %rcx
	call	printf
	leaq	.LC5(%rip), %rcx
	call	puts
	leaq	.LC6(%rip), %rcx
	call	puts
	movl	$122, %edx
	leaq	.LC7(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$96, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC0:
	.long	1374389535
	.long	1074339512
	.ident	"GCC: (x86_64-win32-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
