#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> groceryList;
    int choice;
    std::string item;

    while (true) {
        std::cout << "\nGrocery List Menu:\n";
        std::cout << "1. Add Item\n";
        std::cout << "2. View List\n";
        std::cout << "3. Remove Item\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Clear newline

        if (choice == 1) {
            std::cout << "Enter item to add: ";
            std::getline(std::cin, item);
            groceryList.push_back(item);
            std::cout << "Item added!\n";
        } else if (choice == 2) {
            std::cout << "\nYour Grocery List:\n";
            if (groceryList.empty()) {
                std::cout << "List is empty.\n";
            } else {
                for (size_t i = 0; i < groceryList.size(); ++i) {
                    std::cout << i + 1 << ". " << groceryList[i] << "\n";
                }
            }
        } else if (choice == 3) {
            std::cout << "Enter item number to remove: ";
            size_t num;
            std::cin >> num;
            if (num >= 1 && num <= groceryList.size()) {
                groceryList.erase(groceryList.begin() + num - 1);
                std::cout << "Item removed!\n";
            } else {
                std::cout << "Invalid item number.\n";
            }
        } else if (choice == 4) {
            std::cout << "Goodbye!\n";
            break;
        } else {
            std::cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}