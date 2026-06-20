#include <iostream>

int main() {

    int a = 0;
    int b = 0;

        again:

        if (a <= b) {
        a++;
        std::cout << "a=" << a << "; ";
        }
        
        if (b <= a) {
        b++;
        std::cout << "b=" << b << "; ";
        }

        if (b == a)
        goto again;

   return 0;
}
