#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Correcting the error
    std::random_device rd;
    std::mt19937 eng(rd());
    std::shuffle(numbers.begin(), numbers.end(), eng);

    std::cout << "Shuffled numbers: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
