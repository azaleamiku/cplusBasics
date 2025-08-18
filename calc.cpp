#include <iostream>
#include <string>

int main(void) {
    int firstNumber;

    std::cout << "Enter your first number: " << std::endl;
    std::cin >> firstNumber;

    int secondNumber;

    std::cout << "Enter your second number: " << std::endl;
    std::cin >> secondNumber;

    std::string operation;

    std::cout << "Enter your operation: [+, -, *, /] ";
    std::cin >> operation;

    if (operation == "+") {
        int result = firstNumber + secondNumber;
        std::cout << result << std::endl;
    } 
    else if (operation == "-") {
        int result =  firstNumber - secondNumber;
        std::cout << result << std::endl;
    }
    else if (operation == "*") {
        int result = firstNumber * secondNumber;
        std::cout << result << std::endl;
    }
    else if (operation == "/") {
        int result = firstNumber << secondNumber;
        std::cout << result << std::endl;
    }


}