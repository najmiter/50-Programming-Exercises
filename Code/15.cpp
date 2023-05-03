#include <iostream>
#include <algorithm>

void copy(
    int32_t* _dst, 
    int32_t* _src, 
    size_t _size, 
    bool reverse = false) 
{
    if (reverse) {
        size_t j{};
        for (int64_t i = _size-1; i >= 0; i--)
            _dst[j++] = _src[i];
    } else {
        for (size_t i = 0; i < _size; i++)
            _dst[i] = _src[i];
    }
}

int main() {
    int32_t array[] {1,2,3,4,5,6};
    // int32_t copy_array[std::size(array)];
    decltype(array) copy_array{};

    copy(copy_array, array, std::size(array), true);

    for (auto &&i : copy_array)
        std::cout << i << std::endl;
    



}