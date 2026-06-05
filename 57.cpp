#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> freq;

    std::string word;

    std::cout << "Вводи слова или stop" << std::endl;

    while (true) {
       std::cin >> word;
      
       if (word == "stop")
           break;

       freq[word]++;
    }

    std::cout << "\nРезультат:\n";

    for (const auto& [key, value] : freq) {
        std::cout << key << " -> " << value << std::endl;
    }

    return 0;
}
  
