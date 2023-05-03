#include <iostream>
#include <cstring>

char* join_strs(const char* _s1, const char* _s2) {
    auto s1_len{strlen(_s1)};
    auto s2_len{strlen(_s2)};
    auto total_size{s1_len + s2_len + 1};

    char* joined{ new char[total_size]{} };

    size_t ptr{};
    for (size_t i = 0; i < s1_len; i++) {
        joined[ptr++] = _s1[i];
    }
    for (size_t i = 0; i < s2_len; i++) {
        joined[ptr++] = _s2[i];
    }
    
    return joined;
}

int main() {
    auto string{join_strs("Hello ", "World ")};
    std::cout << string << std::endl;


    delete[] string;
}