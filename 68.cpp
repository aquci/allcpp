#include <iostream>
#include <cstdlib>

int main() {
    char input;
    char a = '`';

    std::cin >> input;
    system("clear");

    while (a < input) {
        a++;
        std::cout << a << std::endl;
    }

    return 0;
}
