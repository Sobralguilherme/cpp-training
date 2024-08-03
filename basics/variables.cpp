// variables.cpp
#include <iostream>
#include <string>

int main() {
    // Declaração e inicialização de variáveis
    int integerVar = 42;             // Variável inteira
    float floatVar = 3.14;           // Variável float
    double doubleVar = 2.71828;      // Variável double
    char charVar = 'A';              // Variável char
    std::string stringVar = "Hello"; // Variável string
    bool boolVar = true;             // Variável booleana

    // Exibindo os valores das variáveis
    std::cout << "Integer: " << integerVar << std::endl;
    std::cout << "Float: " << floatVar << std::endl;
    std::cout << "Double: " << doubleVar << std::endl;
    std::cout << "Char: " << charVar << std::endl;
    std::cout << "String: " << stringVar << std::endl;
    std::cout << "Boolean: " << boolVar << std::endl;

    // Modificando os valores das variáveis
    integerVar = 100;
    floatVar = 6.28;
    doubleVar = 1.41421;
    charVar = 'B';
    stringVar = "World";
    boolVar = false;

    // Exibindo os novos valores das variáveis
    std::cout << "New Integer: " << integerVar << std::endl;
    std::cout << "New Float: " << floatVar << std::endl;
    std::cout << "New Double: " << doubleVar << std::endl;
    std::cout << "New Char: " << charVar << std::endl;
    std::cout << "New String: " << stringVar << std::endl;
    std::cout << "New Boolean: " << boolVar << std::endl;

    return 0;
}
