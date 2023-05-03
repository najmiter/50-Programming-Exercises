#include <iostream>

// 0 > H
// 1 > H
// 2 > N ... 2 % 4 == 2
// 3 > N ... 3 % 4 == 3
// 4 > H
// 5 > H
// 6 > N ... 6 % 4 == 2
// 7 > N ... 7 % 4 == 3
// 8 > H
// 9 > H

void whos_server(int32_t _score) {
    if (_score % 4 == 2 or _score % 4 == 3) {
        std::cout << "Noor" << std::endl;
    } else {
        std::cout << "Haider" << std::endl;
    }
}

int main() {
    whos_server(234);



}