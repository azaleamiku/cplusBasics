#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    
    srand(time(0)); 

    int secretNumber = rand() % 10 + 1; 
    
    int guess;

    std::cout << "I am thinking of a number between 1 and 10. Can you guess what it is?" << std::endl;

    for (int i = 0; i < 3; i++) {
        std::cout << "What is your guess? ";
        std::cin >> guess;

        if (guess == secretNumber) 
        { 
            std::cout << "Wow! You got it right! You are a master guesser!" << std::endl;
            break; 
        } 
        else if (guess > secretNumber) {
            std::cout << "My secret number is smaller than that." << std::endl;
        } 
        else {
            std::cout << "My secret number is bigger than that." << std::endl;
        }
    }
    
    std::cout << "The secret number was " << secretNumber << "." << std::endl;
    return 0;
}