#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;
    std::cout << "\nHi " << name << ",\n\n";
    std::cout << "I love you more than ";
    std::cout << (rand() % 100) + 1 << " puppies!\n";
    std::cout << "And more than " << (rand() % 10) + 1 << " kittens!\n";
    std::cout << "\nHere's a heart for you: \n";
    std::cout << "   \u2665   \u2665   \u2665   \n";
    std::cout << " \u2665      \u2665      \u2665 \n";
    std::cout << "\u2665        \u2665        \u2665\n";
    std::cout << " \u2665      \u2665      \u2665 \n";
    std::cout << "   \u2665   \u2665   \u2665   \n";
    std::cout << "\nThank you for being in my life!\n";
    return 0;
}

