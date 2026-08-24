/*
Q29 (Loops without Arrays/Strings)
Write a program to calculate the factorial of a number.*/

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.");
    } else {
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %lld", n, factorial);
    }

    return 0;
}