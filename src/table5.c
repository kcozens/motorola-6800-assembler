
#include "table.h"

struct oper table[] = {
"adc",  GEN,    0xA9,	2,
"add",  GEN,    0xAB,	2,
"and",  GEN,    0xA4,	2,
"asl",  GRP2,   0x38,	4,
"asla", INH,    0x48,   4,
"aslx", INH,    0x58,   4,
"asr",  GRP2,   0x37,	4,
"asra", INH,    0x47,   4,
"asrx", INH,    0x57,   4,
"bcc",  REL,    0x24,	4,
"bclr", SETCLR, 0x11,   7,
"bcs",  REL,    0x25,	4,
"beq",  REL,    0x27,	4,
"bhcc", REL,    0x28,	4,
"bhcs", REL,    0x29,	4,
"bhi",  REL,    0x22,	4,
"bhs",  REL,    0x24,	4,
"bih",  REL,    0x2F,	4,
"bil",  REL,    0x2E,	4,
"bit",  GEN,    0xA5,	2,
"blo",  REL,    0x25,	4,
"bls",  REL,    0x23,	4,
"bmc",  REL,    0x2C,	4,
"bmi",  REL,    0x2B,	4,
"bms",  REL,    0x2D,	4,
"bne",  REL,    0x26,	4,
"bpl",  REL,    0x2A,	4,
"bra",  REL,    0x20,	4,
"brclr",BTB,    0x01,   10,
"brn",  REL,    0x21,	4,
"brset",BTB,    0x00,   10,
"bset", SETCLR, 0x10,   7,
"bsr",  REL,    0xAD,   8,
"clc",  INH,    0x98,	2,
"cli",  INH,    0x9A,	2,
"clr",  GRP2,   0x3F,	4,
"clra", INH,    0x4F,   4,
"clrx", INH,    0x5F,   4,
"cmp",  GEN,    0xA1,	2,
"cmpx", GEN,    0xA3,	2,
"com",  GRP2,   0x33,	4,
"coma", INH,    0x43,   4,
"comx", INH,    0x53,   4,
"cpx",  GEN,    0xA3,	2,
"dec",  GRP2,   0x3A,	4,
"deca", INH,    0x4A,   4,
"decx", INH,    0x5A,   4,
"eor",  GEN,    0xA8,	2,
"inc",  GRP2,   0x3C,	4,
"inca", INH,    0x4C,   4,
"incx", INH,    0x5C,   4,
"jmp",  NOIMM,  0xAC,   1,
"jsr",  NOIMM,  0xAD,   5,
"lda",  GEN,    0xA6,	2,
"ldx",  GEN,    0xAE,	2,
"lsl",  GRP2,   0x38,	4,
"lsla", INH,    0x48,   4,
"lslx", INH,    0x58,   4,
"lsr",  GRP2,   0x34,	4,
"lsra", INH,    0x44,   4,
"lsrx", INH,    0x54,   4,
"mul",  INH,    0x42,  11,             /* HC05C4 ONLY */
"neg",  GRP2,   0x30,	4,
"nega", INH,    0x40,   4,
"negx", INH,    0x50,   4,
"nop",  INH,    0x9D,	2,
"ora",  GEN,    0xAA,	2,
"rol",  GRP2,   0x39,	4,
"rola", INH,    0x49,   4,
"rolx", INH,    0x59,   4,
"ror",  GRP2,   0x36,	4,
"rora", INH,    0x46,   4,
"rorx", INH,    0x56,   4,
"rsp",  INH,    0x9C,	2,
"rti",  INH,    0x80,   9,
"rts",  INH,    0x81,   6,
"sbc",  GEN,    0xA2,	2,
"sec",  INH,    0x99,	2,
"sei",  INH,    0x9B,	2,
"sta",  NOIMM,  0xA7,   3,
"stop", INH,    0x8E,   2,      /* CMOS only */
"stx",  NOIMM,  0xAF,   3,
"sub",  GEN,    0xA0,	2,
"swi",  INH,    0x83,   11,
"tax",  INH,    0x97,	2,
"tst",  GRP2,   0x3D,	4,
"tsta", INH,    0x4D,   4,
"tstx", INH,    0x5D,   4,
"txa",  INH,    0x9F,	2,
"wait", INH,    0x8F,   2       /* CMOS only */
};

int sizeof_table(void)
{
	return sizeof(table);
}

