#include <iostream>

// 3 x 1 = 3
// 3 x 2 = 6
// 3 x 3 = 9

void print_table(int32_t _number) {
    for (size_t i = 1; i <= 10; i++)
        std::cout << _number << " x " << i << " = " << i * _number << std::endl;
}

int main() {
    print_table(89);    



}