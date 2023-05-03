#include <iostream>
#include <algorithm>

// 4,2,5,7,1,3,9
// 1,2,5,7,4,3,9

void sorted(int32_t* _array, size_t _size) {
    size_t min_i{};

    for (size_t i = 0; i < _size - 1; i++) { // i = 1
        min_i = i;

        for (size_t j = i + 1; j < _size; j++) { // j = 2
            if (_array[j] < _array[min_i]) { // [2] < [1]
                min_i = j; // 4
            }
        }

        std::swap(_array[min_i], _array[i]);
    }
    
}

int main() {
    int32_t array[]{4,2,5,7,1,3,9,0,7};

    std::cout << "\n\tOriginal--> ";
    for (auto each : array) {
        std::cout << each << " ";
    }
    sorted(array, std::size(array));

    std::cout << "\n\tSorted----> ";
    for (auto each : array) {
        std::cout << each << " ";
    }

    std::cout << '\n';

}