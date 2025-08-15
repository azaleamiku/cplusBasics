#include <iostream>

int* createScoresList() {
    int* newScores = new int[3];

    newScores[0] = 50;
    newScores[1] = 60;
    newScores[2] = 70;

    return newScores;
}

int main(void) {
    int* myScores = createScoresList();

    std::cout << "The scores from our new list are: " << std::endl;
    std::cout << myScores[0] << std::endl;
    std::cout << myScores[1] << std::endl;
    std::cout << myScores[2] << std::endl;

    delete[] myScores;
    myScores = nullptr;

    return 0;
}