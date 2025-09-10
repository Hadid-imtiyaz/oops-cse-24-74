#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int isValidNumber(const char *str) {
    if (str == NULL || *str == '\0')
        return 0;

    for (int i = 0; str[i]; i++) {
        if (!isdigit(str[i]))
            return 0;
    }

    return 1;
}


int isLeapYear(int year) {
    if (year % 4 != 0) return 0;
    else if (year % 100 != 0) return 1;
    else if (year % 400 == 0) return 1;
    else return 0;
}

int main() {
    char input[100];

    printf("Enter a year: ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
       
        input[strcspn(input, "\n")] = '\0';

        if (!isValidNumber(input)) {
            printf("Invalid input! Please enter a valid positive integer year.\n");
            return 1;
        }

        int year = atoi(input);
        if (year <= 0) {
            printf("Invalid year! Year must be greater than 0.\n");
            return 1;
        }

        if (isLeapYear(year))
            printf("%d is a leap year.\n", year);
        else
            printf("%d is not a leap year.\n", year);
    } else {
        printf("Error reading input.\n");
        return 1;
    }

    return 0;
}
