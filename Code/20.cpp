#include <iostream>
#include <algorithm>

void swap(int32_t& num1, int32_t& num2) {
    num1 *= num2; // num1 = 2 * 8 == 16
    num2 = num1 / num2; // 16 / 8 == 2
    num1 = num1 / num2; // 16 / 2 == 8
}

int main() {
    int32_t num1{-2};
    int32_t num2{8};
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;    

    std::cout << '\n';
    swap(num1, num2);
    // std::swap(num1, num2);

    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;



}