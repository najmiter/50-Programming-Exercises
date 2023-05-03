#include <iostream>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
// 1  2  3  4  5  6  7  8   9   10

uint64_t nth_fib(uint32_t _n) {
    if (_n == 1 or _n == 0) return 0ULL;
    else if (_n == 2) return 1ULL;

    uint64_t previous2{0}, previous{1}, result{1};

    for (size_t i = 3; i <= _n; i++) {
        result = previous2 + previous;
        previous2 = previous;
        previous = result;
    }
    
    return result;
}

void print_fib(uint32_t _limit) {
    for (size_t i = 1; i <= _limit; i++) {
        std::cout << nth_fib(i) << (i == _limit ? "": ", ");
    }
    std::cout << '\n';
}

int main() {
    print_fib(15);



}