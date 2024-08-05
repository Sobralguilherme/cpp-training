#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() {
        std::cout << "MyClass Constructor" << std::endl;
    }
    ~MyClass() {
        std::cout << "MyClass Destructor" << std::endl;
    }
    void display() {
        std::cout << "Hello from MyClass!" << std::endl;
    }
};

int main() {
    // Unique Pointer
    std::unique_ptr<MyClass> uniquePtr = std::make_unique<MyClass>();
    uniquePtr->display();

    // Shared Pointer
    std::shared_ptr<MyClass> sharedPtr1 = std::make_shared<MyClass>();
    {
        std::shared_ptr<MyClass> sharedPtr2 = sharedPtr1;
        sharedPtr2->display();
        std::cout << "Shared Pointer Count: " << sharedPtr1.use_count() << std::endl;
    }
    std::cout << "Shared Pointer Count after scope: " << sharedPtr1.use_count() << std::endl;

    // Weak Pointer
    std::weak_ptr<MyClass> weakPtr = sharedPtr1;
    if (auto lockedPtr = weakPtr.lock()) {
        lockedPtr->display();
        std::cout << "Weak Pointer locked, Shared Pointer Count: " << sharedPtr1.use_count() << std::endl;
    } else {
        std::cout << "Weak Pointer expired" << std::endl;
    }

    return 0;
}
