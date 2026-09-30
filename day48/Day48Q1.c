/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];

    if (scanf(" %s", s1) == 1 && scanf(" %s", s2) == 1) {
        int len1 = strlen(s1);
        int len2 = strlen(s2);
        if (len1 != len2) {
            printf("Not rotation\n");
            return 0;
        }
        char temp[2000];
        strcpy(temp, s1);
        strcat(temp, s1);
        if (strstr(temp, s2) != NULL)
            printf("Rotation\n");
        else
            printf("Not rotation\n");
    }
    return 0;
}
