// control_structures.cpp
#include <iostream>

int main() {
    int x = 10;

    // Estruturas de controle condicional
    if (x > 0) {
        std::cout << "x is positive" << std::endl;
    } else if (x < 0) {
        std::cout << "x is negative" << std::endl;
    } else {
        std::cout << "x is zero" << std::endl;
    }

    // Estruturas de controle de repetição (loops)
    std::cout << "For loop:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "i = " << i << std::endl;
    }

    std::cout << "While loop:" << std::endl;
    int count = 0;
    while (count < 5) {
        std::cout << "count = " << count << std::endl;
        ++count;
    }

    std::cout << "Do-while loop:" << std::endl;
    int j = 0;
    do {
        std::cout << "j = " << j << std::endl;
        ++j;
    } while (j < 5);

    // Estrutura de controle de seleção (switch)
    int day = 3;
    switch (day) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        case 4:
            std::cout << "Thursday" << std::endl;
            break;
        case 5:
            std::cout << "Friday" << std::endl;
            break;
        case 6:
            std::cout << "Saturday" << std::endl;
            break;
        case 7:
            std::cout << "Sunday" << std::endl;
            break;
        default:
            std::cout << "Invalid day" << std::endl;
            break;
    }

    return 0;
}
