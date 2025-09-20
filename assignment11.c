#include <iostream>
using namespace std;

int main() {
    int N;
    double number, sum = 0;
    double smallest, largest;

    // Ask the user to enter the number of elements
    cout << "Enter the number of values (N): ";
    cin >> N;

    // Input validation
    if (N <= 0) {
        cout << "N must be a positive integer." << endl;
        return 1;
    }

    // Read the first number to initialize smallest and largest
    cout << "Enter number 1: ";
    cin >> number;

    smallest = largest = number;
    sum = number;

    // Read remaining N-1 numbers
    for (int i = 2; i <= N; ++i) {
        cout << "Enter number " << i << ": ";
        cin >> number;

        sum += number;

        if (number < smallest)
            smallest = number;

        if (