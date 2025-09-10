 #include <stdio.h>

int main() {
    int n, target;

  
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    printf("\nSubsets that sum to %d are:\n", target);

    int found = 0;

   
    int totalSubsets = 1 << n;

    for (int mask = 1; mask < totalSubsets; mask++) {
        int sum = 0;
        int subset[n]; 
        int idx = 0;

        for (int i = 0; i < n; i++) {
          
            if (mask & (1 << i)) {
                sum += arr[i];
                subset[idx++] = arr[i];
            }
        }

     
        if (sum == target) {
            printf("[");
            for (int j = 0; j < idx; j++) {
                printf("%d", subset[j]);
                if (j < idx - 1) printf(", ");
            }
            printf("]\n");
            found = 1;
        }
    }

    if (!found) {
        printf("No subsets found with the given sum.\n");
    }

    return 0;
}
