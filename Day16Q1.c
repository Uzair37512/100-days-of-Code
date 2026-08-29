/*Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation.*/

#include <stdio.h>

int main() {
    int num, binary = 0, remainder, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        remainder = num % 2;
        binary = binary + remainder * place;
        place = place * 10;
        num = num / 2;
    }

    printf("Binary equivalent = %d", binary);

    return 0;
}