#include <iostream>
#include <bitset>

int main() {
    uint32_t number{0xFFFFFFFF};

    std::cout << std::bitset<32>(number) << std::endl;
    std::cout << number << std::endl;
    std::cout << '\n';

    void* ptr{&number};

    *((uint16_t*)ptr) = 132;

    std::cout << std::bitset<32>(number) << std::endl;
    std::cout << *((uint16_t*)ptr) << std::endl;
}