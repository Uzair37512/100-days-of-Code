/*Q33 (Loops without Arrays/Strings)
Write a program to check if a number is an Armstrong number.
Show Sample Test Cases*/

#include <stdio.h>

int main() {
    int num, originalNum, remainder;
    int digits = 0;
    int sum = 0;
    int temp;
    int power;
    int i;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    temp = num;

    // Count the number of digits
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    // Calculate the Armstrong sum
    while (temp != 0) {
        remainder = temp % 10;

        power = 1;

        for (i = 1; i <= digits; i++) {
            power = power * remainder;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == originalNum) {
        printf("%d is an Armstrong number.", originalNum);
    } else {
        printf("%d is not an Armstrong number.", originalNum);
    }

    return 0;
}