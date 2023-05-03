#include <iostream>
#include <string>

void change_cases(std::string& _string) {
    // for (size_t i = 0; i < _string.length(); i++) {
    //     auto &each = _string[i];
    //     if (islower(each)) {
    //         each = toupper(each);
    //     } else {
    //         each = tolower(each);
    //     }
    // }

    for (auto& each : _string) {
        if (islower(each)) {
            each = toupper(each);
        } else {
            each = tolower(each);
        }
    }
    
}

int main() {
    std::string string{"ThIs iS A stRiNg"};

    std::cout << string << std::endl;

    change_cases(string);

    std::cout << string << std::endl;


}