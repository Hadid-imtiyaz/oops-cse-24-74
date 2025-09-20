
#include <iostream>
#include <windows.h> // Add this line

int main() {
    int seconds;
    std::cout << "Set alarm after how many seconds? ";
    std::cin >> seconds;

    std::cout << "Alarm set for " << seconds << " seconds from now.\n";
    Sleep(seconds * 1000); // Sleep takes milliseconds
    std::cout << "Wake up! Alarm ringing!\a\n";

    return 0;
}