// assignment3P2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
    srand(time(0)); // Seed for random number generator
    int secretNumber = rand() % 1000 + 1; // Generating a random number between 1 and 1000
    int guess;
    int attempts = 0;

    std::cout << "Guess a number between 1 and 1000." << std::endl;

    while (attempts < 10) {
        std::cin >> guess;

        if (guess == secretNumber) {
            if (attempts < 9)
                std::cout << "Either you know the secret or you got lucky!" << std::endl;
            else
                std::cout << "You know the secret!" << std::endl;
            return 0;
        }
        else if (guess < secretNumber) {
            std::cout << "Too Low, Try Again." << std::endl;
        }
        else {
            std::cout << "Too High, Try Again." << std::endl;
        }

        attempts++;
    }

    std::cout << "You should be able to do better!" << std::endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
