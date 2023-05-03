#include <iostream>
#include <string_view>
#include <cstring>

int32_t vc_count(std::string_view _sentence, bool vowel = true) {
    int32_t count{};

    if (vowel) {
        for (auto each : _sentence) {
            switch (tolower(each)) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    count++;
            }
        }
    } else {

    }

    return count;
}

int main() {
    auto vowels { vc_count("Today is a good day. I think.", false) };

    std::cout << "The total number of vowels = " << vowels << std::endl;



}