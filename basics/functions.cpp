// functions.cpp
#include <iostream>

// Declaração de uma função que soma dois números
int sum(int a, int b) {
    return a + b;
}

// Declaração de uma função que multiplica dois números
int multiply(int a, int b) {
    return a * b;
}

// Função principal
int main() {
    int num1 = 5, num2 = 10;

    // Chamando a função sum e imprimindo o resultado
    std::cout << "Sum: " << sum(num1, num2) << std::endl;

    // Chamando a função multiply e imprimindo o resultado
    std::cout << "Multiply: " << multiply(num1, num2) << std::endl;

    return 0;
}
