#include <iostream>
#include <string>

// 1 % 10 == '2'
// 12 / 10 == 1

std::string int_to_str(int32_t _number) {
    std::string number{};

    while (_number) {
        number = char(_number % 10 + 48) + number;
        _number /= 10;
    }

    return number;
}

int main() {
    auto number{ int_to_str(12323423) };

    std::cout << number << std::endl;


}