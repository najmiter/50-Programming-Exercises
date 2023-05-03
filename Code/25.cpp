#include <cstring>
#include <iostream>
#include <string_view>

bool is_digit(std::string_view _string) {
    size_t start{};
    if (_string[0] == '-' or _string[0] == '+') {
        start++;
    }

    for (size_t i{start}; i < _string.length(); i++) {
        if (not isdigit(_string[i])) {
            return false;
        }
    }
    return true;
    

    // for (auto each : _string) {
    //     if (not isdigit(each) or each != '-') {
    //         return false;
    //     }
    // }
    // return true;
}

int main() {
    if (is_digit("-123.45")) {
        std::cout << "Digit" << std::endl;
    } else {
        std::cout << "NOT Digit" << std::endl;
    }



}