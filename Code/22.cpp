#include <iostream>
#include <algorithm>

int32_t find_sg(int32_t* _array, size_t _size, bool _greater = true) {
    auto any{ _array[0] }; // 1

    if (_greater) {
        for (size_t i = 1; i < _size; i++) {
            if (_array[i] > any) {
                any = _array[i];
            }
        }
    } else {
        for (size_t i = 1; i < _size; i++) {
            if (_array[i] < any) { 
                any = _array[i];
            }
        }
    }

    return any;

}

int main() {
    int32_t array[]{1,2,3,54,4,-5,6};

    auto elem { find_sg(array, std::size(array), false) };

    std::cout << "the greater element is = " << elem << std::endl;



}