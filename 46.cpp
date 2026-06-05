#include <iostream>

int main() {
    double win;
    double game;

    std::cout << "введите свое количество побед:" << std::endl;
    std::cin >> win;
    std::cout << "количество игра:" << std::endl;
    std::cin >> game;

    double winrate = (win / game) * 100;

    std::cout << "winrate: " << winrate << std::endl;

    return 0;
}
