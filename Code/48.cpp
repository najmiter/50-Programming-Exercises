#include <iostream>

int main() {
    int32_t number{199};

    auto addr{ (uint64_t)&number };

    *((float*)addr) = 42.f;

    std::cout << number << std::endl;

}