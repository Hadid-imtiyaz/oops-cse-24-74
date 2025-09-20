#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    double number;
    double sum = 0.0;
    double sum_squares = 0.0;
    double smallest, largest;

    cout << "Enter the number of values (N): ";
    cin >> N;

    if (N <= 0) {
        cout << "N must be greater than 0." << endl;
        return 1;
    }


    cout << "Enter number 1: ";
    cin >> number;

    sum = number;
    sum_squares = number * number;
    smallest = largest = number;

   
    for (int i = 2; i <= N; ++i) {
        cout << "Enter number " << i << ": ";
        cin >> number;

        sum += number;
        sum_squares += number * number;

        if (number < smallest)
            smallest = number;
        if (number > largest)
            largest = number;
    }

    
    double average = sum / N;

   
    double range = largest - smallest;

  
    double standard_deviation = sqrt((sum_squares / N) - (average * average));


    cout << "\nResults:\n";
    cout << "Smallest value: " << smallest << endl;
    cout << "Largest value: " << largest << endl;
    cout << "Range: " << range << endl;
    cout << "Average: " << average << endl;
    cout << "Standard Deviation: " << standard_deviation << endl;

    return 0;
}
