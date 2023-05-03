#include <iostream>
#include <string>

std::string double_to_str(double _number) {
    std::string number{};
    const int32_t Precision{5};

    int64_t big_part = _number;
    _number -= big_part; // 79.043 - 79 == .043

    number = std::to_string(big_part);
    number += ".";

    for (size_t i = 0; i < Precision; i++) {
        _number *= 10.; // .043
        auto holder{(int32_t)_number}; // 
        number += std::to_string(holder);
        _number -= holder;
    }

    return number;
}

int main() {
    auto number{ double_to_str(79.04387) };

    std::cout << number << std::endl;


}