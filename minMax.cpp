#include <iostream>
#include <algorithm>

int main(void) {
    int a = 10, b = 20;
    int maximum = std::max(a, b);
    int minimum = std::min(a, b);

    int max_of_list = std::max({3, 1, 2011,2014, -5});
    int min_of_list = std::min({3, 1, 2011, 2014, -5});

    std::cout << "Max: " << maximum << ", Min: " << minimum << std::endl;
    std::cout << "Max of list: " << max_of_list << ", Min of list: " << min_of_list << std::endl;
    return 0;

}