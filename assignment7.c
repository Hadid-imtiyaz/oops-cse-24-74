#include <stdio.h>
#include <math.h>

int main() {
    int n;
    
    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Pairs (x, y) such that x^2 + y^2 = %d:\n", n);

    int limit = (int)sqrt(n);  // Only need to check up to sqrt(n)

    for (int x = 0; x <= limit; x++) {
        for (int y = 0; y <= limit; y++) {
            int sum = x * x + y * y;

            if (sum > n) {
                // No point in checking further values of y
                break;
            }

            if (sum < n) {
                // This pair doesn't satisfy the condition, skip it
                continue;
            }

            // If sum == n, print the pair
            printf("(%d, %d)\n", x, y);
        }
    }

    return 0;
}
