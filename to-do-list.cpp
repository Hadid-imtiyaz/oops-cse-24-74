#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> todo;
    int choice;
    std::string task;

    while (true) {
        std::cout << "\nTo-Do List Menu:\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Remove Task\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Clear newline from input buffer

        if (choice == 1) {
            std::cout << "Enter task: ";
            std::getline(std::cin, task);
            todo.push_back(task);
            std::cout << "Task added!\n";
        } else if (choice == 2) {
            std::cout << "\nYour Tasks:\n";
            if (todo.empty()) {
                std::cout << "No tasks yet.\n";
            } else {
                for (size_t i = 0; i < todo.size(); ++i) {
                    std::cout << i + 1 << ". " << todo[i] << "\n";
                }
            }
        } else if (choice == 3) {
            std::cout << "Enter task number to remove: ";
            size_t num;
            std::cin >> num;
            if (num >= 1 && num <= todo.size()) {
                todo.erase(todo.begin() + num - 1);
                std::cout << "Task removed!\n";
            } else {
                std::cout << "Invalid task number.\n";
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