#include <iostream>

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main(void)
{
    int result = add(5, 3);

    std::cout << "THe sum is: " << result << std::endl;
    return 0;
}