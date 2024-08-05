#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename = "example.txt";
    std::string content = "Hello, this is a test file.\nThis is the second line.";

    // Writing to a file
    std::ofstream outfile(filename);
    if (outfile.is_open()) {
        outfile << content;
        outfile.close();
        std::cout << "File written successfully." << std::endl;
    } else {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    // Reading from a file
    std::ifstream infile(filename);
    if (infile.is_open()) {
        std::string line;
        while (getline(infile, line)) {
            std::cout << line << std::endl;
        }
        infile.close();
    } else {
        std::cerr << "Error opening file for reading." << std::endl;
        return 1;
    }

    return 0;
}
