#include <iostream>
#include <string_view>

size_t find(std::string_view _string, char _c) {
    for (size_t i = 0; i < _string.length(); i++) {
        if (_string[i] == _c) return i;
    }
    
    return std::string::npos;
}

int main() {
    std::string string{"       qwaracter"};

    auto i{find(string, '1')};
    size_t test = -1;

    std::cout << "'a' is at " << i << std::endl;
    std::cout << test << std::endl;



}