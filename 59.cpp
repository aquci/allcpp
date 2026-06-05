#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, int> cnt;

    int x;
    while (std::cin >> x && x != -1) {
        cnt[x]++;
    }

    for (const auto& [num, times] : cnt) {
        std::cout << num << " -> " << times << '\n';
    }

    return 0;
}
