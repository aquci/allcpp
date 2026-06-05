#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::tuple<int,int,int>> v = {
        {2,3,5},
        {1,7,2},
        {3,1,4},
        {2,2,6}
    };

    std::sort(v.begin(), v.end(),
        [](const auto& a, const auto& b){
            return std::get<0>(a) < std::get<0>(b);
        });

    std::cout << "Сортировка по первому элементу:\n";
    for (auto [x,y,z] : v)
        std::cout << x << " " << y << " " << z << "\n";
}
