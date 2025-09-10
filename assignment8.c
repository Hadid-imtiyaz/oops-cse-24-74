#include <stdio.h>

int main() {
    int n;

  
    printf("Enter the size of the checkerboard (n): ");
    scanf("%d", &n);

    printf("Checkerboard Pattern of size %d x %d:\n\n", n, n);

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           
            if ((i + j) % 2 == 0) {
                printf("# ");
            } else {
                printf("  "); 
        }
        printf("\n");
    }

    return 0;
    }