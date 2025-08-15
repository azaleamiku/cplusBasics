#include <iostream>
using namespace std;

int main(void) {
    int favoriteNumber;

    std::cout << "What is your favorite number?"
    << std::endl;

    std::cin >> favoriteNumber;

    std::cout << favoriteNumber << " is your favorite number."
    << std::endl;
}