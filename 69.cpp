#include <iostream>

int main() {
    char a;
    char b;
    std::cout << "Введи 2 буквы:" << std::endl;
    std::cin >> a >> b;
    
    char start = a;
    char end = b;
    
    if(a > b) {
        start = b;
        end = a;
    }

    std::cout << "Буквы от " << start << " до " << end << ":" << std::endl;

    for(char c = start; c <= end; c++) {
    std::cout << c << std::endl;

    }
    return 0;
}    
