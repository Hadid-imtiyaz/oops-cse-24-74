#include <iostream>

int main() {
    int guests, chairs;
    std::cout << "Enter number of guests: ";
    std::cin >> guests;
    std::cout << "Enter number of chairs: ";
    std::cin >> chairs;

    int arrangements = 1;
    for (int i = 0; i < chairs; ++i) {
        arrangements *= (guests - i);
    }

    std::cout << "Number of possible arrangements: " << arrangements << std::endl;
    return 0;
}