#include <iostream>


// ab = 2
// abc = 3

bool compare(
const std::string& _first, 
const std::string& _second) {
    if (_first.length() == _second.length()) {
        for (size_t i = 0; i < _first.length(); i++) {
            if (_first[i] != _second[i]) 
                return false;
        }
        return true;
    }

    return false;
}

int main() {
    std::string one{"abc"};
    std::string two{"182"};

    if (compare(one, two)) {
        std::cout << "EQUAL" << std::endl;
    } else {
        std::cout << "NOT EQUAL" << std::endl;
    }



}