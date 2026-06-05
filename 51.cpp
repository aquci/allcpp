#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

int main() {
    std::vector <std::pair<int,int>> v = {
        {2,3},
        {1,100},
        {5,1},
        {5,0},
        {6,0},
        {5,9}
    };
std::sort(v.begin(), v.end(),
    [](const auto& a, const auto& b) {
        return a.first + a.second < b.first + b.second;
    }
);


    for (const auto& [a,b] : v) {
        std::cout << "{" << a << ", " << b << "}" << std::endl;
    }

    return 0;
}
