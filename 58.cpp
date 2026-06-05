#include <iostream>
#include <map>

int main() {
    std::map<int,int> cnt;

     int n;
     std::cin >> n;

     for (int i =0; i < n; ++i) {
         int x;
         std::cin >> x;
         cnt[x]++;
     }

     for (const auto&[number, times] : cnt) {
         std::cout << number << " - > " << times << std::endl;
     }

     return 0;
}
