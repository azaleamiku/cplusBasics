#include <iostream>

int main(void) {
    float PI = 3.14159;

    int radius;

    std::cout << "Give me the radius of the Circle: ";
    std::cin >> radius;

    float circumference = 2 * PI * radius;

    std::cout << "The Circumference of the circle is: " << circumference << std::endl;
    
}