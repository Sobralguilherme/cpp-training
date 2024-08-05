// inheritance.cpp
#include <iostream>
#include <string>

// Classe base
class Animal {
public:
    Animal(const std::string& name) : name(name) {}

    void speak() const {
        std::cout << name << " makes a sound." << std::endl;
    }

protected:
    std::string name;
};

// Classe derivada
class Dog : public Animal {
public:
    Dog(const std::string& name) : Animal(name) {}

    void speak() const {
        std::cout << name << " barks." << std::endl;
    }
};

int main() {
    Dog myDog("Rex");
    myDog.speak(); // Exibirá "Rex barks."

    return 0;
}
