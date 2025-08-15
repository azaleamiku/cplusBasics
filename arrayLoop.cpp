#include <iostream>

int main(void)
{
    int highScores[3] = {100, 85, 92};

    for (int i =  0; i < 3; i++)
    {
        std::cout << "Score " 
        << i + 1 
        << ": " 
        << highScores[i] << std::endl;
    }
    return 0;
}