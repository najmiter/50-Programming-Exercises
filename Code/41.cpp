#include <iostream>
#include <string_view>

bool is_strong(std::string_view _password) {
    if (_password.length() >= 8) {
        bool has_digit{};
        bool has_upper_case{};

        for (auto each : _password) {
            if (isdigit(each)) {
                has_digit = true;
            } else if (isupper(each)) {
                has_upper_case = true;
            }
        }
        return has_digit and has_upper_case;

    } else {
        return false;
    }
}


int main() {
    if (is_strong("abcfghjkL0")) {
        std::cout << "Strong" << std::endl;
    } else {
        std::cout << "NOT Strong" << std::endl;
    }



}