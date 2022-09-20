#include <arm_neon.h>
#include "arm-neon-ref.h"
#include "compute-ref-data.h"

#define INSN_NAME vhsub
#define TEST_MSG "VHSUB/VHSUBQ"

/* Expected results.  */
VECT_VAR_DECL(expected,int,8,8) [] = { 0xfe, 0xff, 0xff, 0x0,
				       0x0, 0x1, 0x1, 0x2 };
VECT_VAR_DECL(expected,int,16,4) [] = { 0xffff, 0xffff, 0x0, 0x0 };
VECT_VAR_DECL(expected,int,32,2) [] = { 0x0, 0x0 };
VECT_VAR_DECL(expected,uint,8,8) [] = { 0xfe, 0xff, 0xff, 0x0,
					0x0, 0x1, 0x1, 0x2 };
VECT_VAR_DECL(expected,uint,16,4) [] = { 0xffff, 0x0, 0x0, 0x1 };
VECT_VAR_DECL(expected,uint,32,2) [] = { 0x0, 0x0 };
VECT_VAR_DECL(expected,int,8,16) [] = { 0xfe, 0xfe, 0xff, 0xff,
					0x0, 0x0, 0x1, 0x1,
					0x2, 0x2, 0x3, 0x3,
					0x4, 0x4, 0x5, 0x5 };
VECT_VAR_DECL(expected,int,16,8) [] = { 0xfffe, 0xffff, 0xffff, 0x0,
					0x0, 0x1, 0x1, 0x2 };
VECT_VAR_DECL(expected,int,32,4) [] = { 0xffffffff, 0x0, 0x0, 0x1 };
VECT_VAR_DECL(expected,uint,8,16) [] = { 0xfb, 0xfc, 0xfc, 0xfd,
					 0xfd, 0xfe, 0xfe, 0xff,
					 0xff, 0x0, 0x0, 0x1,
					 0x1, 0x2, 0x2, 0x3 };
VECT_VAR_DECL(expected,uint,16,8) [] = { 0xffff, 0xffff, 0x0, 0x0,
					 0x1, 0x1, 0x2, 0x2 };
VECT_VAR_DECL(expected,uint,32,4) [] = { 0xffffffff, 0x0, 0x0, 0x1 };

#include "binary_op_no64.inc"