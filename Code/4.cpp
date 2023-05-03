#include <iostream>
#include <cmath>
#include <ctime>

bool play_GuessGame() {
    const int32_t attempts{5};
    int32_t secret{ std::rand() % 11 };

    for (size_t i = 0; i < attempts; i++)
    {
        int32_t guess{};
        std::cout << "Your guess:> ";
        std::cin >> guess;

        if (secret == guess) return true;
    }

    return false;
}

int main() {
    std::srand(std::time(nullptr));

    if (play_GuessGame()) {
        std::cout << "You WON!" << std::endl;
    } else {
        std::cout << "You LOST!" << std::endl;
    }

}