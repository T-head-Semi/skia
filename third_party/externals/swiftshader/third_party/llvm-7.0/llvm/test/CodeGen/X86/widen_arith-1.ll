; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc < %s -mtriple=i686-unknown-unknown -mattr=+sse4.2 |  FileCheck %s

define void @update(<3 x i8>* %dst, <3 x i8>* %src, i32 %n) nounwind {
; CHECK-LABEL: update:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    subl $12, %esp
; CHECK-NEXT:    movl $0, (%esp)
; CHECK-NEXT:    pcmpeqd %xmm0, %xmm0
; CHECK-NEXT:    movdqa {{.*#+}} xmm1 = <0,4,8,12,u,u,u,u,u,u,u,u,u,u,u,u>
; CHECK-NEXT:    jmp .LBB0_1
; CHECK-NEXT:    .p2align 4, 0x90
; CHECK-NEXT:  .LBB0_2: # %forbody
; CHECK-NEXT:    # in Loop: Header=BB0_1 Depth=1
; CHECK-NEXT:    movl (%esp), %eax
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %ecx
; CHECK-NEXT:    movl {{[0-9]+}}(%esp), %edx
; CHECK-NEXT:    pmovzxbd {{.*#+}} xmm2 = mem[0],zero,zero,zero,mem[1],zero,zero,zero,mem[2],zero,zero,zero,mem[3],zero,zero,zero
; CHECK-NEXT:    psubd %xmm0, %xmm2
; CHECK-NEXT:    pextrb $8, %xmm2, 2(%ecx,%eax,4)
; CHECK-NEXT:    pshufb %xmm1, %xmm2
; CHECK-NEXT:    pextrw $0, %xmm2, (%ecx,%eax,4)
; CHECK-NEXT:    incl (%esp)
; CHECK-NEXT:  .LBB0_1: # %forcond
; CHECK-NEXT:    # =>This Inner Loop Header: Depth=1
; CHECK-NEXT:    movl (%esp), %eax
; CHECK-NEXT:    cmpl {{[0-9]+}}(%esp), %eax
; CHECK-NEXT:    jl .LBB0_2
; CHECK-NEXT:  # %bb.3: # %afterfor
; CHECK-NEXT:    addl $12, %esp
; CHECK-NEXT:    retl
entry:
	%dst.addr = alloca <3 x i8>*
	%src.addr = alloca <3 x i8>*
	%n.addr = alloca i32
	%i = alloca i32, align 4
	store <3 x i8>* %dst, <3 x i8>** %dst.addr
	store <3 x i8>* %src, <3 x i8>** %src.addr
	store i32 %n, i32* %n.addr
	store i32 0, i32* %i
	br label %forcond

forcond:
	%tmp = load i32, i32* %i
	%tmp1 = load i32, i32* %n.addr
	%cmp = icmp slt i32 %tmp, %tmp1
	br i1 %cmp, label %forbody, label %afterfor

forbody:
	%tmp2 = load i32, i32* %i
	%tmp3 = load <3 x i8>*, <3 x i8>** %dst.addr
	%arrayidx = getelementptr <3 x i8>, <3 x i8>* %tmp3, i32 %tmp2
	%tmp4 = load i32, i32* %i
	%tmp5 = load <3 x i8>*, <3 x i8>** %src.addr
	%arrayidx6 = getelementptr <3 x i8>, <3 x i8>* %tmp5, i32 %tmp4
	%tmp7 = load <3 x i8>, <3 x i8>* %arrayidx6
	%add = add <3 x i8> %tmp7, < i8 1, i8 1, i8 1 >
	store <3 x i8> %add, <3 x i8>* %arrayidx
	br label %forinc

forinc:
	%tmp8 = load i32, i32* %i
	%inc = add i32 %tmp8, 1
	store i32 %inc, i32* %i
	br label %forcond

afterfor:
	ret void
}
