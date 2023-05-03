#include <iostream>

void print_pattern(int32_t _radius) {
    int32_t lower_boundary{_radius-1};
    int32_t upper_boundary{_radius+1};
    bool upper{true};

    while (lower_boundary != upper_boundary) {
        for (size_t i = 0; i < upper_boundary; i++) {
            if (i <= lower_boundary) {
                std::cout << " ";
            } else {
                std::cout << "*";
            }
        }
        std::cout << '\n';
        if (not lower_boundary) upper = false;

        if (upper) {
            lower_boundary--;
            upper_boundary++;
        } else {
            lower_boundary++;
            upper_boundary--;
        }

    }
    
}

int main() {
    print_pattern(10);



}