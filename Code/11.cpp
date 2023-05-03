#include <iostream>
#include <cmath>
#include <iomanip>

// 4 6 8 10 12242348
// 9 -> 3,
// 21 -> 3, 7

// 15

// 1. prime number are always odd number
// 2. and odd numbers only have odd numbers as their factor


bool is_prime(uint64_t _number) {
    if (_number % 2 == 0 or _number == 1) return false;

    for (size_t i{3}; i <= std::sqrt(_number); i+=2) {
        if (_number % i == 0) {
            return false;
        }
    }

    return true;
}

void print_primes(uint64_t _start, uint64_t _end) {
    for (size_t i = _start; i <= _end; i++) {
        if (is_prime(i)) {
            std::cout << i << std::endl;
        }
    }
    
}


int main() {
    // std::cout << std::boolalpha << is_prime(21) << std::endl;

    print_primes(50, 700);



}