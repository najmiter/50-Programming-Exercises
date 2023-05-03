#include <iostream>

uint64_t power(uint64_t _base, uint64_t _pow) {
    uint64_t answer{1};

    for (size_t i = 0; i < _pow; i++) {
        answer *= _base;
    }

    return answer;
}

int main() {
    auto answer{ power(12, 2) };

    std::cout << answer << std::endl;



}