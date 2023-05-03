#include <iostream>
#include <string_view>

std::string substr(
    std::string_view _string,
    size_t _start,
    size_t _end = -1UL) {

    std::string string{};

    for (size_t i = _start; i < _string.length() and i < _end; i++)
        string += _string[i];


    return string;
}

int main() {
    auto sub_str { substr("This is the full string....", 2) };

    std::cout << sub_str << std::endl;


}