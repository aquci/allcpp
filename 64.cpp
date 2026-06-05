#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int input;
    std::vector<int> v;

    std::cout << "Введи числа для сортировки | 01(stop)" << std::endl;
   
    while (true) {
        std::cin >> input;

        if (input == 01) break;

        v.push_back(input);
    }


    std::sort(v.begin(), v.end());


    for (int a : v) {
        std::cout << a << std::endl;
}

    return 0;
}
