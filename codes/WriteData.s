	.file	"WriteData.cpp"
	.text
	.align 2
	.def	__ZSt17__verify_groupingPKcjRKSs;	.scl	3;	.type	32;	.endef
__ZSt17__verify_groupingPKcjRKSs:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$40, %esp
	movl	16(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNKSs4sizeEv
	decl	%eax
	movl	%eax, -4(%ebp)
	movl	12(%ebp), %eax
	decl	%eax
	movl	%eax, -12(%ebp)
	leal	-12(%ebp), %eax
	movl	%eax, 4(%esp)
	leal	-4(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt3minIjERKT_S2_S2_
	movl	(%eax), %eax
	movl	%eax, -8(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, -16(%ebp)
	movb	$1, -17(%ebp)
	movl	$0, -24(%ebp)
L2:
	movl	-24(%ebp), %eax
	cmpl	-8(%ebp), %eax
	jae	L5
	cmpb	$0, -17(%ebp)
	je	L5
	movl	-16(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	16(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNKSsixEj
	movl	%eax, %ecx
	movl	8(%ebp), %eax
	movl	-24(%ebp), %edx
	addl	%eax, %edx
	movzbl	(%ecx), %eax
	cmpb	(%edx), %al
	sete	%al
	movb	%al, -17(%ebp)
	leal	-16(%ebp), %eax
	decl	(%eax)
	leal	-24(%ebp), %eax
	incl	(%eax)
	jmp	L2
L5:
	cmpl	$0, -16(%ebp)
	je	L6
	cmpb	$0, -17(%ebp)
	je	L6
	movl	-16(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	16(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNKSsixEj
	movl	%eax, %ecx
	movl	8(%ebp), %eax
	movl	-8(%ebp), %edx
	addl	%eax, %edx
	movzbl	(%ecx), %eax
	cmpb	(%edx), %al
	sete	%al
	movb	%al, -17(%ebp)
	leal	-16(%ebp), %eax
	decl	(%eax)
	jmp	L5
L6:
	movl	$0, 4(%esp)
	movl	16(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNKSsixEj
	movl	%eax, %ecx
	movl	8(%ebp), %eax
	movl	-8(%ebp), %edx
	addl	%eax, %edx
	movzbl	(%ecx), %eax
	cmpb	(%edx), %al
	jg	L8
	movzbl	-17(%ebp), %eax
	andl	$1, %eax
	movb	%al, -25(%ebp)
	jmp	L9
L8:
	movb	$0, -25(%ebp)
L9:
	movzbl	-25(%ebp), %eax
	movb	%al, -17(%ebp)
	movzbl	-17(%ebp), %eax
	leave
	ret
.lcomm __ZSt8__ioinit,16
	.def	___main;	.scl	2;	.type	32;	.endef
	.def	__Unwind_SjLj_Resume;	.scl	2;	.type	32;	.endef
	.def	___gxx_personality_sj0;	.scl	2;	.type	32;	.endef
	.def	__Unwind_SjLj_Register;	.scl	2;	.type	32;	.endef
	.def	__Unwind_SjLj_Unregister;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "scores.txt\0"
LC1:
	.ascii "John\0"
LC2:
	.ascii " \0"
LC3:
	.ascii "T\0"
LC4:
	.ascii "Smith\0"
LC5:
	.ascii "Eric\0"
LC6:
	.ascii "K\0"
LC7:
	.ascii "Jones\0"
LC8:
	.ascii "Done\0"
	.text
	.align 2
.globl _main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$364, %esp
	andl	$-16, %esp
	movl	$0, %eax
	addl	$15, %eax
	addl	$15, %eax
	shrl	$4, %eax
	sall	$4, %eax
	movl	%eax, -348(%ebp)
	movl	-348(%ebp), %eax
	call	__alloca
	movl	$___gxx_personality_sj0, -308(%ebp)
	movl	$LLSDA1473, -304(%ebp)
	leal	-300(%ebp), %eax
	leal	-24(%ebp), %edx
	movl	%edx, (%eax)
	movl	$L15, %edx
	movl	%edx, 4(%eax)
	movl	%esp, 8(%eax)
	leal	-332(%ebp), %eax
	movl	%eax, (%esp)
	call	__Unwind_SjLj_Register
	call	___main
	leal	-280(%ebp), %eax
	movl	%eax, (%esp)
	movl	$-1, -328(%ebp)
	call	__ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1Ev
	movl	$32, 4(%esp)
	movl	$16, (%esp)
	call	__ZStorSt13_Ios_OpenmodeS_
	movl	%eax, 8(%esp)
	movl	$LC0, 4(%esp)
	leal	-280(%ebp), %eax
	movl	%eax, (%esp)
	movl	$1, -328(%ebp)
	call	__ZNSt14basic_ofstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
	movl	$LC1, 4(%esp)
	leal	-280(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC2, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC3, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC2, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC4, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC2, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$90, 4(%esp)
	movl	%eax, (%esp)
	call	__ZNSolsEi
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	%eax, (%esp)
	call	__ZNSolsEPFRSoS_E
	movl	$LC5, 4(%esp)
	leal	-280(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC2, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC6, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC2, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC7, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC2, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$85, 4(%esp)
	movl	%eax, (%esp)
	call	__ZNSolsEi
	leal	-280(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNSt14basic_ofstreamIcSt11char_traitsIcEE5closeEv
	movl	$LC8, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	%eax, (%esp)
	call	__ZNSolsEPFRSoS_E
	leal	-280(%ebp), %eax
	movl	%eax, (%esp)
	movl	$-1, -328(%ebp)
	call	__ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
	movl	$0, -336(%ebp)
	jmp	L10
L15:
	leal	24(%ebp), %ebp
	movl	-324(%ebp), %eax
	movl	%eax, -344(%ebp)
L11:
	movl	-344(%ebp), %edx
	movl	%edx, -340(%ebp)
	leal	-280(%ebp), %eax
	movl	%eax, (%esp)
	movl	$0, -328(%ebp)
	call	__ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
	movl	-340(%ebp), %eax
	movl	%eax, -344(%ebp)
L13:
	movl	-344(%ebp), %edx
	movl	%edx, (%esp)
	movl	$-1, -328(%ebp)
	call	__Unwind_SjLj_Resume
L10:
	leal	-332(%ebp), %eax
	movl	%eax, (%esp)
	call	__Unwind_SjLj_Unregister
	movl	-336(%ebp), %eax
	leal	-12(%ebp), %esp
	popl	%ebx
	popl	%esi
	popl	%edi
	popl	%ebp
	ret
	.section	.gcc_except_table,"dr"
LLSDA1473:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE1473-LLSDACSB1473
LLSDACSB1473:
	.uleb128 0x0
	.uleb128 0x0
LLSDACSE1473:
	.text
	.section	.text$_ZStorSt13_Ios_OpenmodeS_,"x"
	.linkonce discard
	.align 2
.globl __ZStorSt13_Ios_OpenmodeS_
	.def	__ZStorSt13_Ios_OpenmodeS_;	.scl	2;	.type	32;	.endef
__ZStorSt13_Ios_OpenmodeS_:
	pushl	%ebp
	movl	%esp, %ebp
	movl	12(%ebp), %eax
	orl	8(%ebp), %eax
	popl	%ebp
	ret
	.section	.text$_ZSt3minIjERKT_S2_S2_,"x"
	.linkonce discard
	.align 2
.globl __ZSt3minIjERKT_S2_S2_
	.def	__ZSt3minIjERKT_S2_S2_;	.scl	2;	.type	32;	.endef
__ZSt3minIjERKT_S2_S2_:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$4, %esp
	movl	12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	(%eax), %eax
	cmpl	(%edx), %eax
	jae	L18
	movl	12(%ebp), %eax
	movl	%eax, -4(%ebp)
	jmp	L17
L18:
	movl	8(%ebp), %eax
	movl	%eax, -4(%ebp)
L17:
	movl	-4(%ebp), %eax
	leave
	ret
	.text
	.align 2
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	cmpl	$65535, 12(%ebp)
	jne	L20
	cmpl	$1, 8(%ebp)
	jne	L20
	movl	$__ZSt8__ioinit, (%esp)
	call	__ZNSt8ios_base4InitC1Ev
L20:
	cmpl	$65535, 12(%ebp)
	jne	L19
	cmpl	$0, 8(%ebp)
	jne	L19
	movl	$__ZSt8__ioinit, (%esp)
	call	__ZNSt8ios_base4InitD1Ev
L19:
	leave
	ret
	.align 2
	.def	__GLOBAL__I_main;	.scl	3;	.type	32;	.endef
__GLOBAL__I_main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	ret
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__I_main
	.text
	.align 2
	.def	__GLOBAL__D_main;	.scl	3;	.type	32;	.endef
__GLOBAL__D_main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	movl	$65535, 4(%esp)
	movl	$0, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	ret
	.section	.dtors,"w"
	.align 4
	.long	__GLOBAL__D_main
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	3;	.type	32;	.endef
	.def	__ZNSt14basic_ofstreamIcSt11char_traitsIcEE5closeEv;	.scl	3;	.type	32;	.endef
	.def	__ZNSolsEPFRSoS_E;	.scl	3;	.type	32;	.endef
	.def	__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	3;	.type	32;	.endef
	.def	__ZNSolsEi;	.scl	3;	.type	32;	.endef
	.def	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	3;	.type	32;	.endef
	.def	__ZNSt14basic_ofstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode;	.scl	3;	.type	32;	.endef
	.def	__ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev;	.scl	3;	.type	32;	.endef
	.def	__ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1Ev;	.scl	3;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	3;	.type	32;	.endef
	.def	__ZNKSsixEj;	.scl	3;	.type	32;	.endef
	.def	__ZNKSs4sizeEv;	.scl	3;	.type	32;	.endef
	.def	__ZSt3minIjERKT_S2_S2_;	.scl	3;	.type	32;	.endef
