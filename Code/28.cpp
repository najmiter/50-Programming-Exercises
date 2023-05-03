#include <iostream>
#include <string_view>
#include <cmath>

int32_t bin_to_dec(std::string_view _binary) {
    int32_t number{};

    for (int32_t i = _binary.length()-1, pwr{}; i >= 0; i--, pwr++) {
        if (_binary[i] != '0') {
            number += std::pow(2, pwr); // 5
        } // 2
    }
    
    return number;
}

int main() {
    auto number{ bin_to_dec("101") };

    // 0 * 2^0 + 0 * 2^1 + 1 * 2^2 + 1 * 2^3

    std::cout << "converted = " << number << std::endl;

}