#include <iostream>

int main(void)
{
    int highScores[3];

    highScores[0] = 100;
    highScores[1] = 85;
    highScores[2] = 92;

    std::cout <<"The highest score is: " << highScores[0] << std::endl;
    std::cout << "The second score is: " << highScores[1] << std::endl;
    std:: cout << "The third score is: " << highScores[2] << std::endl;

    return 0;
}