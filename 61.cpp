#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>

int main() {
    std::string input;
    std::vector<std::pair<std::string, int>> v; 
    int id_counter = 0;

    std::cout << "Введите строки (для завершения введите 'end'):" << std::endl;
 
    while (true) {
        std::cin >> input;
        if (input == "end") break;

        v.push_back({input, id_counter});
        id_counter++;
    }
   
    std::sort(v.begin(), v.end(), 
              [](const auto& p1, const auto& p2) {
                  return p1.second > p2.second;
              });


    for (const auto& [a,b] : v) {
        std::cout << "{" << a << ", " << b << "}" << std::endl;
    }

    return 0;
}
