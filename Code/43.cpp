#include <iostream>
#include <algorithm>

size_t count(int32_t *_array, size_t _size, int32_t _val) {
    size_t cnt{};

    for (size_t i = 0; i < _size; i++) {
        if (_array[i] == _val) {
            cnt++;
        }
    }
    
    return cnt;
}

int main() {
    int32_t array[]{3, 2, 5, 3, 7, 1, 1, 9, 5, 3};
    auto occurred {count(array, std::size(array), 10)};

    std::cout << occurred << std::endl;


}