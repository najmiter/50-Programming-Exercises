#include <iostream>
#include <cmath>
#include <ctime>


bool is_prime(uint64_t _number) {
    if (_number % 2 == 0 or _number == 1) return false;

    for (size_t i{3}; i <= std::sqrt(_number); i+=2) 
        if (_number % i == 0) return false;

    return true;
}

void print_until_prime() {
    std::srand(std::time(nullptr));
    auto random{ std::rand() % 1001 };

    while (not is_prime(random)) {
        std::cout << random << ", ";
        random = std::rand() % 1001;
    }
}

int main() {
    print_until_prime();



}