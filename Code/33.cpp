#include <iostream>

int32_t reverse(int32_t _number) {
    int32_t reversed{};

    // 389
    while (_number) {
        reversed *= 10;
        reversed += _number % 10;
        _number /= 10;
    }

    return reversed;
}

int main() {
    auto reversed { reverse(12345) };

    std::cout << "Reversed number = " << reversed << std::endl;



}