#include <iostream>
#include <string>

// Template de função
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

// Template de classe
template <typename T>
class Box {
private:
    T value;
public:
    Box(T v) : value(v) {}
    void setValue(T v) { value = v; }
    T getValue() { return value; }
};

// Função principal
int main() {
    // Teste do template de função
    int a = 10, b = 20;
    std::cout << "Max of " << a << " and " << b << " is " << max(a, b) << std::endl;
    
    double x = 10.5, y = 20.5;
    std::cout << "Max of " << x << " and " << y << " is " << max(x, y) << std::endl;

    // Teste do template de classe
    Box<int> intBox(123);
    std::cout << "Box contains: " << intBox.getValue() << std::endl;
    intBox.setValue(456);
    std::cout << "Box now contains: " << intBox.getValue() << std::endl;

    Box<std::string> strBox("Hello");
    std::cout << "Box contains: " << strBox.getValue() << std::endl;
    strBox.setValue("World");
    std::cout << "Box now contains: " << strBox.getValue() << std::endl;

    return 0;
}
