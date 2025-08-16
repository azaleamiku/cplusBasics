#include <iostream>
#include <string>

struct Player {
    std::string name;
    int score;
};

int main() {
    Player player1;

    player1.name = "Miku";
    player1.score = 99;

    std::cout << "The player's name is " << player1.name << std::endl;
    std::cout << "Their score is " << player1.score << std::endl;

    return 0;
}