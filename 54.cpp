#include <iostream>
#include <cmath>
#include <cstdint>

int main() {
    int z = 10;
    int x = 4;
    int c = pow(z, x);

    std::cout << "\n" << c << std::endl;

    uint8_t a = 10;
    uint8_t s = 18;
    uint64_t d = pow(a, s);

    std::cout << "\n" << d << std::endl;

    return 0;
}
