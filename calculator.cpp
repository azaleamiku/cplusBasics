#include <iostream>
#include <string>

int main() 
{
    while (true) {
        int num1, num2;
        std::string operation;

        std::cout << "Enter a number (or 'q' to quit): ";
        if (!(std::cin >> num1)) {
            std::cin.clear();           
            std::cin.ignore(10000, '\n'); 
            std::string input;
            std::cin >> input;
            if (input == "q" || input == "quit") {
                std::cout << "Goodbye!" << std::endl;
                break;
            } else {
                std::cout << "Invalid input. Try again.\n";
                continue;
            }
        }

        std::cout << "Enter an operation [+, -, *, /] (or 'q' to quit): ";
        std::cin >> operation;
        if (operation == "q" || operation == "quit") {
            std::cout << "Goodbye!" << std::endl;
            break;
        }

        std::cout << "Enter a number: ";
        if (!(std::cin >> num2)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid number. Try again.\n";
            continue;
        }

        int result;
        if (operation == "+") {
            result = num1 + num2;
        } else if (operation == "-") {
            result = num1 - num2;
        } else if (operation == "*") {
            result = num1 * num2;
        } else if (operation == "/") {
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero!\n";
                continue;
            }
        } else {
            std::cout << "Error: Invalid operation!\n";
            continue;
        }

        std::cout << "Result: " << result << "\n\n";
    }

    return 0;
}
