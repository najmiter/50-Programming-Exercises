#include <iostream>

void fizz_buzz() {
    for (size_t i = 1; i < 100; i++) {
        if (i % 3 == 0 and i % 5 == 0) {
            std::cout << "fizzbuzz\n";

        } else if (i % 5 == 0) {
            std::cout << "buzz\n";

        } else if (i % 3 == 0) {
            std::cout << "fizz\n";

        } else {
            std::cout << i << std::endl;
        }
    }
}

int main() {
    fizz_buzz();



}
