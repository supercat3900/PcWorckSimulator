#include <iostream>
#include "disk.h"
#include "gpu.h"
#include "kbd.h"
#include "cpu.h"
#include "ram.h"

int main()  {
    for (;;) {
        std::string action;
        std::cout << "enter action:";
        std::cin >> action;
        if (action == "include") {
            input(ram, 8);
        }
        else if (action == "load") {
            load(ram, 8);
        }
        else if (action == "save") {
            save(ram, 8);
        }
        else if (action == "display") {
            display(ram, 8);
        }
        else if (action == "input") {
            input(ram, 8);
        }
        else if (action == "sum") {
            sum(ram, 8);
        }
        else if (action == "exit") {
            break;
        }
    }
}
