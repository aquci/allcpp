#include <iostream>
#include <string>

int main() {
    std::string s;
    bool ok = true;

    std::cout << "Введи слово: " << std::endl;
    std::cin >> s;

    for(int i = 0; i < s.size() / 2 ; i++) {
        if(s[i] != s[s.size() - 1 - i]) {
           ok = false;
           break;
        }
    }


    if (ok)
        std::cout << "Палиндром\n";
    else
        std::cout << "Не палиндром\n";

    return 0;
}
