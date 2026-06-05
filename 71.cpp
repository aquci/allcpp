#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s;
    int letters = 0, digits = 0, spaces = 0;

    std::cout << "Введи строку:\n";
    std::getline(std::cin, s);

    for(char c : s) {
        if(isalpha(c)) letters++;
        else if(isdigit(c)) digits++;
        else if(isspace(c)) spaces++;
    }

    std::cout << "букв: " << letters << std::endl;
    std::cout << "цифр: " << digits << std::endl;
    std::cout << "пробелов: " << spaces << std::endl;

    return 0;
}
