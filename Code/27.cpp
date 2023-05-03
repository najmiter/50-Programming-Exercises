#include <iostream>
#include <cstring>
#include <bitset>

/* 
    2 | 16
    -----------
    2 | 8   - 0
    -----------
    2 | 4   - 0
    -----------
    2 | 2   - 0
    -----------
    2 | 1   - 0

*/

std::string dec_to_bin(int32_t _decimal) { // '1'
    std::string binary{}; // '1' + "0000" == "10000"
    while (_decimal) {
        binary = (char)(_decimal%2+48) + binary; // 
        _decimal /= 2; // 1
    }

    return binary;
}

int main() {
    std::cout << dec_to_bin(16534) << std::endl;
    std::cout << std::bitset<15>(16534) << std::endl;



}