#include <stdio.h>

int main() {
    float income, tax;

    // Prompt user for input
    printf("Enter your annual income (in ₹): ");
    scanf("%f", &income);

    tax = 0.0;

   
    if (income <= 250000) {
        tax = 0.0;
    } else {
        if (income <= 500000) {
            
            tax = (income - 250000) * 0.05;
        } else {
            if (income <= 1000000) {
                
                tax = (250000 * 0.05) + (income - 500000) * 0.20;
            } else {
              
                tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
            }
        }
    }


    printf("Your income tax is: ₹%.2f\n", tax);

    return 0;
}
