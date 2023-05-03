#include <iostream>
#include <algorithm>
#include <string_view>

bool are_equal(
int32_t     *_a1, 
size_t      _s1, 
int32_t     *_a2,
size_t      _s2) {
    if (_s1 == _s2) {
        for (size_t i = 0; i < _s1; i++) {
            if (_a1[i] != _a2[i]) {
                return false;
            }
        }

        return true;

    } else {
        return false;
    }
}

bool are_equal(std::string_view _s1, std::string_view _s2) {
    if (_s1.length() == _s2.length()) {
        for (size_t i = 0; i < _s1.length(); i++) {
            if (_s1[i] != _s2[i]) {
                return false;
            }
        }
        
        return true;

    } else {
        return false;
    }
}

int main() {
    // int32_t a1[]{1,0,3};
    // int32_t a2[]{1,2,3};

    // if (are_equal(a1, std::size(a1), a2, std::size(a2))) {
    //     std::cout << "Equal" << std::endl;
    // } else {
    //     std::cout << "NOT Equal" << std::endl;
    // }
    if (are_equal("string", "5tring")) {
        std::cout << "Equal" << std::endl;
    } else {
        std::cout << "NOT Equal" << std::endl;
    }



}