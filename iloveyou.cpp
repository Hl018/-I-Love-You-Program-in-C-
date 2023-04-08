#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>

void printFile(std::string fileName);

int main()
{
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;
    std::cout << "\nHi " << name << ",\n\n";
    
    srand(time(NULL));
    int numPuppies = (rand() % 100) + 1;
    int numKittens = (rand() % 10) + 1;
    int numStars = (rand() % 20) + 1;
    std::string luckyColor[] = {"red", "orange", "yellow", "green", "blue", "purple"};
    std::string color = luckyColor[rand() % 6];
    
    std::cout << "I love you more than " << numPuppies << " puppies!\n";
    std::cout << "And more than " << numKittens << " kittens!\n";
    std::cout << "\nHere's a heart for you: \n";
    std::cout << "   \u2665   \u2665   \u2665   \n";
    std::cout << " \u2665      \u2665      \u2665 \n";
    std::cout << "\u2665        \u2665        \u2665\n";
    std::cout << " \u2665      \u2665      \u2665 \n";
    std::cout << "   \u2665   \u2665   \u2665   \n";
    
    std::cout << "\nI also love you to the stars and back " << numStars << " times!\n";
    std::cout << "Your lucky color is " << color << "!\n\n";
    
    std::cout << "Would you like to save this message to a file? (y/n): ";
    char saveFile;
    std::cin >> saveFile;
    if (saveFile == 'y') {
        std::ofstream outFile;
        std::string fileName = name + "_loveMessage.txt";
        outFile.open(fileName);
        outFile << "Hi " << name << ",\n\n";
        outFile << "I love you more than " << numPuppies << " puppies!\n";
        outFile << "And more than " << numKittens << " kittens!\n";
        outFile << "\nHere's a heart for you: \n";
        outFile << "   \u2665   \u2665   \u2665   \n";
        outFile << " \u2665      \u2665      \u2665 \n";
        outFile << "\u2665        \u2665        \u2665\n";
        outFile << " \u2665      \u2665      \u2665 \n";
        outFile << "   \u2665   \u2665   \u2665   \n";
        outFile << "\nI also love you to the stars and back " << numStars << " times!\n";
        outFile << "Your lucky color is " << color << "!\n\n";
        outFile.close();
        std::cout << "Your message has been saved to " << fileName << "!\n\n";
    }
    
    std::cout << "Would you like to read a saved love message? (y/n): ";
    char readFile;
    std::cin >> readFile;
    if (readFile == 'y') {
        std

