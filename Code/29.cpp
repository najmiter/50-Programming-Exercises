#include <iostream>
#include <string_view>

// 123
// 
// number = number * 120
// number = number + 3 // 123

int32_t str_to_int(std::string_view _number) {
    int32_t number{};
    bool negative{};
    size_t start{};

    if (_number[0] == '-') {
        negative = true;
    }
    if (not isdigit(_number[0])) {
        start++;
    }

    for (size_t i{ start }; i < _number.length(); i++) {
        number *= 10;
        number += _number[i] - 48;
    }
    

    // for (auto each : _number) {
    //     number *= 10;
    //     number += each - 48;
    // }

    return negative ? -number : number;
}

int main() {
    
    auto converted{ str_to_int("+123") };

    std::cout << converted << std::endl;

}