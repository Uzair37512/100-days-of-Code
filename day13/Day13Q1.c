/*
Q25 (Conditional Statements)
Write a program to implement a basic calculator using switch-case for +, -, *, /, %*/

#include <stdio.h>

int main()
{
    char op;
    int a, b, result;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op)
    {
        case '+':
            result = a + b;
            printf("Result = %d", result);
            break;

        case '-':
            result = a - b;
            printf("Result = %d", result);
            break;

        case '*':
            result = a * b;
            printf("Result = %d", result);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero is not possible.");
            break;

        case '%':
            if (b != 0)
                result = a % b;
            else
            {
                printf("Modulo by zero is not possible.");
                break;
            }
            printf("Result = %d", result);
            break;

        default:
            printf("Invalid operator.");
    }

    return 0;
}