// Declare all the instruction related defines here
// funct7[6]/funct3 field for all the supported instructions
#define ADD     0x0
#define ADDI    0x17
#define AND     0x7
#define ANDI    0x1c
#define BEQ     0x0
#define BNE     0x1
#define BLT     0x4
#define BGE     0x5
#define BLTU    0x6
#define BGEU    0x7
#define JAL     0x3
#define JALR    0x9
#define LB      0x0
#define LBU     0x4
#define LH      0x1
#define LHU     0x5
#define LW      0x2
#define AUIPC   0x27
#define LUI     0x37
#define OR      0x6
#define ORI     0x16
#define SB      0x0
#define SH      0x1
#define SW      0x2
#define SLL     0x1
#define SLLI    0x11
#define SLT     0x2
#define SLTI    0x12
#define SLTIU   0x1b
#define SLTU    0x3
#define SRA     0xd
#define SRAI    0x15
#define SRL     0x5
#define SRLI    0x15
#define SUB     0x8
#define XOR     0x4
#define XORI    0x14