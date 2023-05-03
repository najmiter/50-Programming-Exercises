#include <iostream>

void print_2d(
int32_t* _array,
size_t _size,
size_t _rows,
size_t _cols) {
    if (_rows*_cols == _size) {
        size_t ptr{};
        for (size_t i = 0; i < _rows; i++) {
            for (size_t j = 0; j < _cols; j++) {
                std::cout << _array[ptr++] << " ";
            }
            std::cout << '\n';
        }
        
    } else {
        std::cerr << "Invalid dimensions\n";
    }
} 

int main() {
    auto array{ new int32_t[] {1,2,3,4,5,6,7,8,9}};
    // size_t size{9UL};

    print_2d(array, 9, 9, 1);





}