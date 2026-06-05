#include <iostream>
#include <utility>

int main() {
    std::pair<double,double> p;
    std::cout << "Введите два числа в сортировщик:\n" << std::endl;
    std::cin >> p.first >> p.second;

    if (p.first > p.second) {
       std::swap(p.first, p.second);
    }
       std::cout << p.first << " " << p.second << std::endl;

    return 0;
}
