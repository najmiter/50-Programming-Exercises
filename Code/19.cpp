#include <iostream>
#include <cmath>
#include <ctime>
#include <string>

std::string random_link() {
    std::srand(std::time(nullptr));
    std::string link{};
    const std::string abc{"abcdefghijklmnopqrstuvwxyz"};

    for (size_t i = 0; i < 12; i++)
        link += abc[std::rand() % 26];

    link[3] = '-';
    link[8] = '-';

    return link;
}

int main() {
    
    std::cout << "https://meet.google.com/" << random_link() << std::endl;


}