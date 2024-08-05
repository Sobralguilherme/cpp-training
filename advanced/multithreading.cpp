#include <iostream>
#include <thread>

void printHello() {
    std::cout << "Hello from thread!" << std::endl;
}

int main() {
    std::thread t(printHello);  // Cria um thread para executar a função printHello
    t.join();  // Espera a thread terminar sua execução
    std::cout << "Hello from main!" << std::endl;
    return 0;
}
