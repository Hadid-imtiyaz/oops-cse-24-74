#include <iostream>
#include <iomanip>

int main() {
    float totalBill, tipPercent, tipAmount, grandTotal, perPerson;
    int numPeople;

    std::cout << "Enter total bill amount: ";
    std::cin >> totalBill;

    std::cout << "Enter tip percentage (e.g., 10 for 10%): ";
    std::cin >> tipPercent;

    std::cout << "Enter number of people: ";
    std::cin >> numPeople;

    tipAmount = totalBill * tipPercent / 100;
    grandTotal = totalBill + tipAmount;
    perPerson = grandTotal / numPeople;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Tip amount: " << tipAmount << std::endl;
    std::cout << "Total amount (with tip): " << grandTotal << std::endl;
    std::cout << "Each person should pay: " << perPerson << std::endl;

    return 0;
}