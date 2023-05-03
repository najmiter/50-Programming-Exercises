#include <iostream>
#include <algorithm>
#include <cmath>
#include <ctime>

size_t eo_count(int32_t* _array, size_t _size, bool _even = true) {
    size_t count{};
    if (_even) {
        for (size_t i = 0; i < _size; i++) {
            if (_array[i] % 2 == 0) {
                count++;
            }
        }
    } else {
        for (size_t i = 0; i < _size; i++) {
            if (_array[i] % 2 == 1) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    std::srand(std::time(nullptr));
    int32_t array[100]{};
    for (auto &i : array) {
        i = std::rand() % 1001;
    }
    

    auto count { eo_count(array, std::size(array), false) };

    std::cout << "Total even numbers are = " << count << std::endl;




}