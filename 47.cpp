#include <iostream>
#include <utility>

int main() {
    std::pair<int, int> p;

    std::cout << "введи координаты:\n";
    std::cin >> p.first >> p.second;

    std::cout << p.first << " " << p.second << "\n";
    return 0;
}
