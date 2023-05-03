#include <iostream>
#include <string_view>

void print_ascii(std::string_view _string) {
    for (auto each : _string) {
        std::cout << (int16_t)each << ", ";
    }
}

void print_ascii_if(std::string_view _string) {
    for (auto each : _string) {
        if (each % 2 == 0)
            std::cout << each;
    }
}



int main() {
    print_ascii("This is a test\tstring");
    std::cout << '\n';
    print_ascii_if("This is a test\tstring");





}