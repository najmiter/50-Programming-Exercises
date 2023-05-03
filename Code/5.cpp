#include <iostream>
#include <algorithm>

void reverse(std::string& string) {
    int32_t mid = string.length() / 2;
    int32_t i = 0;
    int32_t j = string.length()-1;

    while (i < j) {
        std::swap(string[i], string[j]);
        i++;
        j--;
    }

}

int main() {
    std::string string{"12.asd3"};

    std::cout << "\nBefore\t" << string << std::endl;

    reverse(string);

    std::cout << "After\t" << string << std::endl;


}