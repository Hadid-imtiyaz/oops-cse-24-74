#include <stdio.h>


float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int modulus(int a, int b);

int main() {
    float num1, num2, result;
    int choice;
    char operation;

   
    printf("Simple Calculator using Switch Statement with Functions\n");
    printf("--------------------------------------------------------\n");
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Choose operation (+, -, *, /, %%): ");
    scanf(" %c", &operation);  

    switch(operation) {
        case '+':
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0)
                result = divide(num1, num2);
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            printf("Result: %.2f\n", result);
            break;
        case '%':
          
            if ((int)num2 != 0)
                printf("Result: %d\n", modulus((int)num1, (int)num2));
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}


float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}
