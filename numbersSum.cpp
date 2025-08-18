#include <iostream>

int main(void) {
    int i = 0;
    for (int num = 1; num <= 5; num++) {
        i += num;
    }

    std::cout << i << std::endl;
}