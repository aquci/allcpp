#include <iostream>
#include <string>

std::string encrypt(const std::string& text) {
    std::string result;
    for (size_t i = 0; i < text.length(); ++i) {
        // Проверяем, является ли текущий байт началом русской 'о' (0xD0 0xBE)
        if (static_cast<unsigned char>(text[i]) == 0xD0 && 
            i + 1 < text.length() && 
            static_cast<unsigned char>(text[i + 1]) == 0xBE) {
            result += '=';
            ++i; // Пропускаем следующий байт
        } 
        // Проверяем, является ли текущий байт началом русской 'О' (0xD0 0x9E)
        else if (static_cast<unsigned char>(text[i]) == 0xD0 && 
                 i + 1 < text.length() && 
                 static_cast<unsigned char>(text[i + 1]) == 0x9E) {
            result += '=';
            ++i;
        }
        // Проверяем английскую 'o'
        else if (text[i] == 'o' || text[i] == 'O') {
            result += '=';
        }
        else {
            result += text[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Введите текст: ";
    std::getline(std::cin, input);
    
    std::string encrypted = encrypt(input);
    std::cout << encrypted << std::endl;
    
    return 0;
}
