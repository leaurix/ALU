#include "alu.h"

int ALU::add(int a, int b) {
    return a + b;
}

int ALU::subtract(int a, int b) {
    return a - b;
}

int ALU::logicalAND(int a, int b) {
    return a & b;
}

int ALU::logicalOR(int a, int b) {
    return a | b;
}

int ALU::logicalNOT(int a) {
    return ~a;
}
