#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Asking user for input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Space before %c to avoid newline issues

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch-case for operations
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
