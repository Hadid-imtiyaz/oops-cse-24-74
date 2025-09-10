#include <stdio.h>


unsigned long long factorial(int num) {
    if (num < 0) return 0; 
    unsigned long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int choice;
    
    do {
        
        printf("\n===== Menu =====\n");
        printf("1. Find Factorial of a Number\n");
        printf("2. Find GCD of Two Numbers\n");
        printf("3. Find LCM of Two Numbers\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int num;
                printf("Enter a non-negative integer: ");
                scanf("%d", &num);
                if (num < 0) {
                    printf("Factorial is not defined for negative numbers.\n");
                } else {
                    printf("Factorial of %d is: %llu\n", num, factorial(num));
                }
                break;
            }
            case 2: {
                int a, b;
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
                break;
            }
            case 3: {
                int a, b;
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("LCM of %d and %d is: %d\n", a, b, lcm(a, b));
                break;
            }
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter 1–4.\n");
        }
    } while (choice != 4);

    return 0;
}
