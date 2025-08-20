#include <iostream>
#include <algorithm>
#include <string>


int main(void) {
    std::string text = "Hello, World!"; 
    std::reverse(text.begin(), text.end());
    std::cout << text << std::endl;
    return 0;
}