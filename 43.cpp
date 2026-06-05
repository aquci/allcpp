#include <iostream>
#include <cstdint>
#include <string>

void print_fibonacci(__uint128_t num) {
    std::string result;
    if (num == 0) {
        result = "0";
    } else {
        while (num > 0) {
            result = char('0' + (num % 10)) + result;
            num /= 10;
        }
    }
    std::cout << result;
}

int main() {
    __uint128_t first = 0, second = 1;
    
    std::cout << "Числа Фибоначчи (__uint128_t):" << std::endl;
    
    for (uint16_t i = 1; i <= 186; i++) {
        std::cout << i << ". ";
        print_fibonacci(first);
        std::cout << std::endl;
        
        __uint128_t next = first + second;
        first = second;
        second = next;
    }
    
    return 0;
}
