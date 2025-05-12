#include <iostream>
#include "alu.h"

int main() {
    ALU alu;
    int a, b;
    int choice;

    std::cout << "Enter first integer (A): ";
    std::cin >> a;
    std::cout << "Enter second integer (B): ";
    std::cin >> b;

    std::cout << "\nSelect operation:\n";
    std::cout << "1. Addition (A + B)\n";
    std::cout << "2. Subtraction (A - B)\n";
    std::cout << "3. AND (A & B)\n";
    std::cout << "4. OR (A | B)\n";
    std::cout << "5. NOT A (~A)\n";
    std::cout << "6. NOT B (~B)\n";
    std::cout << "Enter your choice (1-6): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Result: " << alu.add(a, b) << std::endl;
            break;
        case 2:
            std::cout << "Result: " << alu.subtract(a, b) << std::endl;
            break;
        case 3:
            std::cout << "Result: " << alu.logicalAND(a, b) << std::endl;
            break;
        case 4:
            std::cout << "Result: " << alu.logicalOR(a, b) << std::endl;
            break;
        case 5:
            std::cout << "Result: " << alu.logicalNOT(a) << std::endl;
            break;
        case 6:
            std::cout << "Result: " << alu.logicalNOT(b) << std::endl;
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
            break;
    }

    return 0;
}
