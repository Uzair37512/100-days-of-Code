/*
Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char line[1000];

    if (fgets(line, sizeof(line), stdin) != NULL) {
        line[strcspn(line, "\r\n")] = '\0';

        char *p = line;
        if (strncmp(p, "str = ", 6) == 0) {
            p += 6;
        } else if (strncmp(p, "str=", 4) == 0) {
            p += 4;
        }

        int new_word = 1;
        for (int i = 0; p[i] != '\0'; i++) {
            if (isspace((unsigned char)p[i])) {
                new_word = 1;
                putchar(p[i]);
            } else {
                if (new_word && isalpha((unsigned char)p[i])) {
                    putchar(toupper((unsigned char)p[i]));
                    new_word = 0;
                } else {
                    putchar(p[i]);
                    new_word = 0;
                }
            }
        }
        putchar('\n');
    }
    return 0;
}
