#include <iostream>
#include "gpu.h"

void display(int *ram, int lenght) {
    for (int i = 0; i < 8; i++) {
        std::cout << ram[i] << std::endl;
    }
}
