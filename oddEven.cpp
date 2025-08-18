#include <iostream>

int main(void) {
    int num = 20;
    int result = num % 2;

    if (result == 1) {
        std::cout << "The number is odd" << std::endl;
    }
    else {
        std::cout << "The number is even" << std::endl;
    }
}