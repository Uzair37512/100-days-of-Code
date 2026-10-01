/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    char words[50][100];
    int count = 0;

    if (scanf(" %[^\n]", str) == 1) {
        char *token = strtok(str, " \t\r\n");
        while (token != NULL && count < 50) {
            strcpy(words[count++], token);
            token = strtok(NULL, " \t\r\n");
        }
        if (count > 0) {
            for (int i = 0; i < count - 1; i++) {
                printf("%c.", toupper(words[i][0]));
            }
            if (count > 1) printf(" ");
            printf("%s\n", words[count - 1]);
        }
    }
    return 0;
}
