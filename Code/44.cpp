#include <iostream>
#include <algorithm>
size_t count(int32_t* _array, size_t _size, int32_t _val);

void make_unique(int32_t*& _array, size_t& _size) {
    size_t new_size{};
    for (size_t i = 0; i < _size; i++) {
        if (count(_array, _size, _array[i]) == 1) {
            new_size++;
        }
    }

    auto unique{ new int32_t[new_size] };

    size_t ptr{};
    for (size_t i = 0; i < _size; i++) {
        if (count(_array, _size, _array[i]) == 1) {
            unique[ptr++] = _array[i];
        }
    }
    
    _size = new_size;
    delete[] _array;
    _array = unique;
}


int main() {
    auto array { new int32_t[]{3, 5, 1, 0, 7, 4, 0} };
    size_t size{7UL};

    make_unique(array, size);

    for (size_t i = 0; i < size; i++) {
        std::cout << array[i] << ", ";
    }
    


}





size_t count(int32_t *_array, size_t _size, int32_t _val) {
    size_t cnt{};

    for (size_t i = 0; i < _size; i++) 
        if (_array[i] == _val)
            cnt++;
    
    return cnt;
}
