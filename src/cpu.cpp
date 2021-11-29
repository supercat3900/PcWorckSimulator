#include <iostream>
#include "cpu.h"

void sum(const int *ram, int lenght) {
    int sum;
    for (int i = 0; i < 8; i++) {
        sum += ram[i];
    }
    std::cout << "sum = " << sum;
}
