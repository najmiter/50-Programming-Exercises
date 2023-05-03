#include <iostream>
#include <string_view>

bool is_binary(std::string_view _number) {
    for (auto each : _number) {
        if (not (each == '0' or each == '1')) { // 'r'
            return false;
        }
    }
    return true;
}

int main() {
    if (is_binary("1r0011101")) {
        std::cout << "Binary digit" << std::endl;
    } else {
        std::cout << "NOT a Binary digit" << std::endl;
    }



}