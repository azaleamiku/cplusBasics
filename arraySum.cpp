#include <iostream>

int main(void) {
    int numbers[3] = {10, 20, 30};
    int sum;

    for (int i = 0; i < 3; i++) {
        sum = sum + numbers[i];
    }

    std::cout << sum << std::endl;
}