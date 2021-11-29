#include <iostream>
#include "kbd.h"

void input(int *ram, int lenght) {
    for (int i = 0; i < 8; i++) {
        std::cout << "enter number:";
        std::cin >> ram[i];
    }
}

