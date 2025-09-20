#include <iostream>
#include <vector>
#include <iomanip>

struct Employee {
    int id;
    double wage;
    double hours;
};

int main() {
    int n;
    std::cout << "Enter number of employees: ";
    std::cin >> n;

    std::vector<Employee> employees(n);

    // Input employee data
    for (int i = 0; i < n; ++i) {
        std::cout << "\nEmployee " << i + 1 << ":\n";
        std::cout << "ID: ";
        std::cin >> employees[i].id;
        std::cout << "Hourly wage: ";
        std::cin >> employees[i].wage;
        std::cout << "Hours worked: ";
        std::cin >> employees[i].hours;
    }

    double totalPayroll = 0;

    std::cout << "\nEmployee Net Pays:\n";
    std::cout << std::fixed << std::setprecision(2);

    for (const auto& emp : employees) {
        double gross;
        if (emp.hours > 40)
            gross = 40 * emp.wage + (emp.hours - 40) * emp.wage * 1.5;
        else
            gross = emp.hours * emp.wage;

        double tax = gross * 0.03625;
        double net = gross - tax;
        totalPayroll += net;

        std::cout << "Employee ID: " << emp.id << ", Net Pay: $" << net << std::endl;
    }

    double averagePay = totalPayroll / n;
    std::cout << "\nTotal Payroll: $" << totalPayroll << std::endl;
    std::cout << "Average Net Pay: $" << averagePay << std::endl;

    return 0;
}