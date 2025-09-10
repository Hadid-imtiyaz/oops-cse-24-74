#include <stdio.h>

int main() {
    int number, reversed, digit;

    printf("Number Reversal Program (Enter 0 to stop)\n");

    do {
     
        printf("\nEnter a positive integer (0 to exit): ");
        scanf("%d", &number);

      
        if (number == 0) {
            printf("Program terminated.\n");
            break;
        }

        if (number < 0) {
            printf("Invalid input. Please enter a positive integer.\n");
            continue;
        }

        reversed = 0;
        int temp = number;

        while (temp > 0) {
            digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        printf("Reversed number: %d\n", reversed);

    } while (1);  

    return 0;
}
