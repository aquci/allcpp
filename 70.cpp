#include <iostream>

int main() {
    char a;
    int num;
    std::cout << "Введи букву и цифру" << std::endl;
    std::cin >> a >> num;

    for(int b = 0; b <= num; b++) {
    std::cout << a++ << std::endl;
    }
    return 0;
}
