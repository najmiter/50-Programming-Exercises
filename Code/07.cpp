#include <iostream>
#include <string_view>
size_t find(std::string_view _string, char _c);

void remove(std::string& string, char _c) {
    auto i{ find(string, _c) };

    if (i != std::string::npos) {
        auto before{ string.substr(0, i) }; // ch
        auto after{ string.substr(i+1) }; // racter
        string = before + after;
    }
}

int main() {
    std::string string{"1character1"};
    remove(string, '1'); // chracter
    std::cout << string << std::endl;


}

size_t find(std::string_view _string, char _c) {
    for (size_t i = 0; i < _string.length(); i++) {
        if (_string[i] == _c) return i;
    }
    
    return std::string::npos;
}