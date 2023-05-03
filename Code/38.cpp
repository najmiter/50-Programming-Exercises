#include <iostream>
#include <string_view>

double str_to_double(std::string_view _number) {
    double number{};
    double divider{1.};
    bool dec_found{};

    for (auto each : _number) {
        if (each == '.') {
            dec_found = true;
            continue;
        }

        if (dec_found) divider *= 10;

        number *= 10;
        number += each - 48;
    }

    return number / divider;
}

int main() {
    auto number{ str_to_double("12.0321") };
    std::cout << number << std::endl;



}