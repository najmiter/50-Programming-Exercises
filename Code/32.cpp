#include <iostream>

uint32_t sum_digits(int32_t _number) {
    uint32_t sum{};

    while (_number) {
        sum += _number % 10;
        _number /= 10;
    }

    return sum;
}

int main() {
    auto sum{ sum_digits(45493) };

    std::cout << "Sum is = " << sum << std::endl;



}