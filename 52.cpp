#include <iostream>
#include <utility>

std::pair<int,int> read_pair() { 
        int a, b;
        std::cin >> a >> b;
        return {a, b};
        }

int main() {
    auto [a, b] = read_pair();
    std::cout << "{" << a << ", " << b << "}" << std::endl;

return 0;
}
