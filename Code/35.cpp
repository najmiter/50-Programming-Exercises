#include <iostream>

int32_t seel(float _number) {
    int32_t number = _number; // 2
    return float(number) < _number ? ++number : number;
}

int32_t flower(float _number) {
    return int32_t(_number);
}

int main() {
    // auto number{ seel(2.8f) };
    auto number{ flower(1.9f) };
    std::cout << number << std::endl;



}