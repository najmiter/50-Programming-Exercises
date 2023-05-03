#include <cmath>
#include <string>
#include <iostream>
#include <string_view>

std::string gen_password(int32_t length = 8) {
    std::string password{};
    std::string upper_alphas{"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string lower_alphas{"abcdefghijklmnopqrstuvwxyz"};
    std::string digits{"0123456789"};

    for (size_t i = 0; i < length; i++) {
        password += lower_alphas[std::rand() % 26];
    }

    auto upper_index{std::rand() % length};
    auto digit_index{std::rand() % length};

    while (upper_index == digit_index) {
        digit_index = std::rand() % length;
    }
    
    password[upper_index] = upper_alphas[std::rand() % 26];
    password[digit_index] = digits[std::rand() % 10];

    return password;
}

int main() {
    std::srand(std::time(nullptr));
    auto password{ gen_password(10) };

    std::cout << password << std::endl;


}