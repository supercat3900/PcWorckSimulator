#include <fstream>
#include "disk.h"

void load(int *ram, int lenght) {
    std::ifstream disk("disk.txt");
    for (int i = 0; i < 8; i++) {
        disk >> ram[i];
    }
    disk.close();
}

void save(int *ram, int lenght) {
    std::ofstream disk("disk.txt");
    for (int i = 0; i < 8; i++) {
        disk << ram[i] << std::endl;
    }
    disk.close();
}
