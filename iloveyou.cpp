#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Please enter your name: ";
    std::cin >> name;

    std::cout << "Hi " << name << ", ";
    std::cout << "I \u2665 you too!" << std::endl;

    return 0;
}
