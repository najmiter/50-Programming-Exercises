#include <iostream>

size_t how_many_chocolates(int32_t x, int32_t y, int32_t z) {
    return (x * 10 + y * 5) / z;
}

int main() {
    auto chocolates{ how_many_chocolates(10, 17, 20) };

    std::cout << "You can but " << chocolates << " chocolates" << std::endl;

}