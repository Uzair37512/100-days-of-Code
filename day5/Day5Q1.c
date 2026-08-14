/*Q9 (User Inputs, Operations & Output)
Write a program to calculate simple and compound interest for given principal, rate, and time.*/

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}