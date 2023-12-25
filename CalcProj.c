#include <stdio.h>

int main() {
    char operation;
    float num1, num2;

    while (1) {         //This runs the program until the user enters 5
        printf("Choose the operation (+, -, *, /, 5 to exit): ");
        scanf(" %c", &operation);

        if (operation == '5') { //This is the exit condition
            break;
        }

        printf("Enter two numbers: "); //This is the calculator
        scanf("%f %f", &num1, &num2);
        if (num1 < 0 || num2 < 0) { //This is the negative number case
            printf("Cannot use negative numbers.\n");
            continue;
        }

        switch (operation) { //This is the switch statement
            case '+': //This is the addition case
                printf("Result: %f\n", num1 + num2);
                break;
            case '-': //This is the subtraction case
                printf("Result: %f\n", num1 - num2);
                break;
            case '*': //This is the multiplication case
                printf("Result: %f\n", num1 * num2);
                break;
            case '/': //This is the division case
                if (num2 != 0.0) //This is the division by zero case
                    printf("Result: %f\n", num1 / num2);
                else
                    printf("Cannot divide by zero.\n");
                break;
            default:
                printf("Invalid operation!\n");
                
        }
    }

    printf("Calculator closed.\n"); //This is the exit message
    return 0;
}
