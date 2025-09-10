#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n, i = 2;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers less than or equal to %d are:\n", n);

    
    while (i <= n) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");
    return 0;
}
