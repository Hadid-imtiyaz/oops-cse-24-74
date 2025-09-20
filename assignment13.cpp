#include <iostream>
#include <vector>

int main() {
    std::vector<int> temps = {
        55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 65, 78, 82, 88, 91,
        92, 90, 93, 87, 80, 78, 79, 72, 68, 61, 59
    };

    int hot = 0, pleasant = 0, cold = 0;

    for (int temp : temps) {
        std::cout << "Temperature: " << temp << " - ";
        if (temp >= 85) {
            std::cout << "Hot day\n";
            hot++;
        } else if (temp >= 60) {
            std::cout << "Pleasant day\n";
            pleasant++;
        } else {
            std::cout << "Cold day\n";
            cold++;
        }
    }

    std::cout << "\nNumber of hot days: " << hot << std::endl;
    std::cout << "Number of pleasant days: " << pleasant << std::endl;
    std::cout << "Number of cold days: " << cold << std::endl;

    return 0;
}