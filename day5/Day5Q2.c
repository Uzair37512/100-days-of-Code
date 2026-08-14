/*
Q10 (User Inputs, Operations & Output)
Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
#include <stdio.h>

int main() {
    int total_sec, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total_sec);

    hours = total_sec / 3600;
    minutes = (total_sec % 3600) / 60;
    seconds = total_sec % 60;

    printf("Time format: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}