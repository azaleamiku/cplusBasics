#include <iostream>

void printScores(int scoresList[], int listSize) {
    std::cout << "Here are the scores from your list: " << std::endl;

    for (int i = 0; i < listSize; i++) {
        std::cout << "Score #" << i + 1 << ": " << scoresList[i] << std::endl;
    }
}

int main(void) {
    int myScores[3] = {100, 85, 92};

    printScores(myScores, 3);

    return 0;
}