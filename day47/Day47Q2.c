/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char longest[1000] = "";
    int maxLen = 0;

    if (scanf(" %[^\n]", str) == 1) {
        char *token = strtok(str, " \t\r\n");
        while (token != NULL) {
            int len = strlen(token);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, token);
            }
            token = strtok(NULL, " \t\r\n");
        }
        printf("%s\n", longest);
    }
    return 0;
}
