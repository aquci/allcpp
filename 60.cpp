#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 2, 5, 1, 2, 7};

    std::unordered_map<int, int> cnt;


    for(int x : nums) {
       cnt[x]++;
    }

    for (const auto& [key, value] : cnt) {
        std::cout << key << " -> " << value << std::endl;
    }
    
    return 0;
}
