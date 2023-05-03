#include <iostream>

bool is_female(uint64_t _ID) {
    return _ID % 10 % 2 == 0;
}

int main() {
    if (is_female(12345678965433ULL)) {
        std::cout << "Female" << std::endl;
    } else {
        std::cout << "Male" << std::endl;
    }



}