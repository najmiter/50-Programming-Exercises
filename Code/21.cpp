#include <iostream>
#include <algorithm>

uint64_t mul(int32_t* _array, size_t _size) {
    uint64_t total{1};
    for (size_t i = 0; i < _size; i++)
        total *= _array[i];
    
    return total;    
}

int main() {
    int32_t array[]{2,3,6,7,9,10};

    auto muul{ mul(array, std::size(array)) };

    std::cout << "mul is = " << muul << std::endl;



}