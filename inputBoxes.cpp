#include <iostream>
#include <string>

struct Player {
    std::string name;
    int score;
};

int main() {
    Player playerList[2];

    for (int i = 0; i < 2; i++) {
        std::cout << "Enter player " << i + 1 << "'s name: ";

        std::cin.ignore();
        std::getline(std::cin, playerList[i].name);

        std::cout << "Enter player " << i + 1 << "'s score: ";
        std::cin >> playerList[i].score;
    }

    std::cout << "\nHere is your list of players:" << std::endl;
    for (int i = 0; i < 2; i++) {
        std::cout << "Player: " << playerList[i].name << ", Score: " << playerList[i].score << std::endl;
    }

    return 0;
}