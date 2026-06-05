#include <iostream>

int main() {
    int a = 10;
    int b = 30;
    int c = 1;
    
    for (int i = 0; i < b; ++i)
    c *= a;

    std::cout << c % 7 << std::endl;

    return 0;
}
