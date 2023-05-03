#include <iostream>
#include <algorithm>

bool is_sorted(
int32_t* _array,
size_t _size,
bool _ascending = true) {
    // 2, 5, 8, 4, 9
    auto any{ _array[0] }; // 2
    for (size_t i = 1; i < _size; i++) {
        if (any < _array[i]) { // 8 < 4
            any = _array[i]; // 8
        } else {
            return false;
        }
    }
    
    return true;
}

int main() {
    int32_t array[]{2, 5, 8, 4, 9};

    if (is_sorted(array, std::size(array))) {
        std::cout << "Sorted" << std::endl;
    } else {
        std::cout << "NOT Sorted" << std::endl;
    }



}