#include <iostream>
#include <sstream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> m;

    std::cout << "Вводи строки или stop\n";

    while (true) {
        std::string line;
        std::getline(std::cin, line);

        if (line == "stop") break;

        std::stringstream ss(line);
        std::string word;

        while (ss >> word) {
            m[word]++;
        }
    }

    for (const auto& [key, value] : m) {
        std::cout << key << " -> " << value << std::endl;
    }

    return 0;
}
