#include <iostream>
#include <sstream>
#include <vector>
#include <tuple>
#include <string>

int main() {
    std::vector<std::tuple<std::string, int, std::string>> v;

    while (true) {
        std::string line;
        std::getline(std::cin, line);

        if (line == "stop") break;

        std::stringstream ss(line);
        std::string cmd, word;
        int num;

        ss >> cmd >> num >> word;
        v.push_back({cmd, num, word});
    }

    for (const auto& [cmd, num, word] : v) {
        std::cout << cmd << " | " << num << " | " << word << std::endl;
    }

    return 0;
}
