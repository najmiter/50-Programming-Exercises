#include <iostream>
#include <string_view>
#include <cstring>

size_t words_c(std::string_view _string) {
    size_t words{1};

    // for (auto &each : _string) {
    //     if (isspace(each) and not isspace(((char*)&each)[1])) {
    //         words++;
    //     }
    // }

    for (size_t i = 0; i < _string.length()-1; i++)
    {
        if (isspace(_string[i]) and not isspace(_string[i+1])) {
            words++;
        }
    }
    

    return words;
}

int main() {
    auto total_words { words_c("today \t    is a good   ") };

    std::cout << "Total words: " << total_words << std::endl;


}