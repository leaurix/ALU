#ifndef ALU_H
#define ALU_H

class ALU {
public:
    int add(int a, int b);
    int subtract(int a, int b);
    int logicalAND(int a, int b);
    int logicalOR(int a, int b);
    int logicalNOT(int a);
};

#endif
