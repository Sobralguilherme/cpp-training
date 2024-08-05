// polymorphism.cpp
#include <iostream>

class Animal {
public:
    virtual void makeSound() {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow!" << std::endl;
    }
};

void describeAnimalSound(Animal* animal) {
    animal->makeSound();
}

int main() {
    Animal* myDog = new Dog();
    Animal* myCat = new Cat();
    
    describeAnimalSound(myDog); // Output: Woof!
    describeAnimalSound(myCat); // Output: Meow!

    delete myDog;
    delete myCat;

    return 0;
}
