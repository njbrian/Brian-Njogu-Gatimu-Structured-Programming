#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int result;

    printf("**** Nj Simple Calculator ****\n");
    printf("------------------------------\n");
    printf("\n");
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // Notice the space before %c to consume any leftover newline

    printf("Enter second integer: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is undefined.\n");
            } else {
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("Error: Modulus by zero is undefined.\n");
            } else {
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
