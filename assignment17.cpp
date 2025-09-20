#include <iostream>

int main() {
    int height = 20;
    for (int i = 1; i <= height; ++i) {
        // Print spaces
        for (int s = 0; s < height - i; ++s) {
            std::cout << " ";
        }
        // Print Xs
        for (int x = 0; x < 2 * i - 1; ++x) {
            std::cout << "X";
        }
        std::cout << std::endl;
    }
    return 0;
}