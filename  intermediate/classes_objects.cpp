// classes_objects.cpp
#include <iostream>
#include <string>

class Person {
public:
    // Construtor
    Person(const std::string& name, int age) : name(name), age(age) {}

    // Método para exibir informações
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    Person person1("Alice", 30);
    Person person2("Bob", 25);

    person1.display();
    person2.display();

    return 0;
}
