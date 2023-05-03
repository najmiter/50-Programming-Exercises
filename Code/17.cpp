#include <iostream>
#include <algorithm>
#include <cmath>

void square_array(int32_t* _dst, int32_t* _src, size_t _size) {
    
    for (size_t i{}, j{}; i < _size; i++) {
        _dst[j++] = _src[i];
        _dst[j++] = std::pow(_src[i], 2);
    }
    
}

int main() {
    int32_t array[] {2, 4, 7, 3, 9, 5};
    auto size{ std::size(array) };

    int32_t squares[size*2];

    square_array(squares, array, size);

    for (size_t i = 0; i < size*2; i++)
    {
        std::cout << squares[i++] << ":\t" << squares[i] << std::endl;
    }
    

}