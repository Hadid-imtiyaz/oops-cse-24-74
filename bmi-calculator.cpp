#include <iostream>

int main() {
    float weight, height, bmi;

    std::cout << "Enter your weight in kilograms: ";
    std::cin >> weight;

    std::cout << "Enter your height in meters: ";
    std::cin >> height;

    bmi = weight / (height * height);

    std::cout << "Your BMI is: " << bmi << std::endl;

    if (bmi < 18.5)
        std::cout << "You are underweight." << std::endl;
    else if (bmi < 25)
        std::cout << "You have a normal weight." << std::endl;
    else if (bmi < 30)
        std::cout << "You are overweight." << std::endl;
    else
        std::cout << "You are obese." << std::endl;

    return 0;
}