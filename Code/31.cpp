#include <iostream>

size_t digit_count(int32_t _number) {
    size_t count{};

    while (_number) {
        count++;
        _number /= 10;
    }

    return count;
}

int main() {
    auto digits{ digit_count(300824) };

    std::cout << "Total digits = " << digits << std::endl;


}