/*
Q34 (Loops without Arrays/Strings)
Write a program to check if a number is prime.*/

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is a prime number.", num);
    } else {
        printf("%d is not a prime number.", num);
    }

    return 0;
}