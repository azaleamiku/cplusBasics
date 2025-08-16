#include <iostream>

int main(void) {
    int highScores[3];

    std::cout << "Enter your top 3 scores!" << std::endl;

    for (int i = 0; i < 3; i++) {
        std::cout << "Enter score #" << i + 1 << ": ";
        std::cin >> highScores[i];
    }

    std::cout << "\nYour top scores are: " << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "Score " << i + 1 << ": " << highScores[i] << std::endl;
    }

    return 0;
}