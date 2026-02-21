	.arch armv8-a
	.file	"rq-offsets.c"
// GNU C11 (Ubuntu 13.3.0-6ubuntu2~24.04) version 13.3.0 (aarch64-linux-gnu)
//	compiled by GNU C version 13.3.0, GMP version 6.3.0, MPFR version 4.2.1, MPC version 1.3.1, isl version isl-0.26-GMP

// GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
// options passed: -mlittle-endian -mgeneral-regs-only -mabi=lp64 -mbranch-protection=pac-ret -O2 -std=gnu11 -fshort-wchar -funsigned-char -fno-common -fno-PIE -fno-strict-aliasing -fno-asynchronous-unwind-tables -fno-unwind-tables -fno-delete-null-pointer-checks -fno-allow-store-data-races -fstack-protector-strong -fno-omit-frame-pointer -fno-optimize-sibling-calls -ftrivial-auto-var-init=zero -fno-stack-clash-protection -falign-functions=4 -fstrict-flex-arrays=3 -fms-extensions -fno-strict-overflow -fstack-check=no -fconserve-stack -fno-builtin-wcslen -fstack-protector-strong
	.text
	.section	.text.startup,"ax",@progbits
	.align	2
	.global	main
	.type	main, %function
main:
// kernel/sched/rq-offsets.c:9: 	DEFINE(RQ_nr_pinned, offsetof(struct rq, nr_pinned));
#APP
// 9 "kernel/sched/rq-offsets.c" 1
	
.ascii "->RQ_nr_pinned 3280 offsetof(struct rq, nr_pinned)"	//
// 0 "" 2
// kernel/sched/rq-offsets.c:12: }
#NO_APP
	mov	w0, 0	//,
	ret	
	.size	main, .-main
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align	3
	.word	4
	.word	16
	.word	5
	.string	"GNU"
	.word	3221225472
	.word	4
	.word	2
	.align	3
