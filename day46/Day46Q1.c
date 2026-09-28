/*
Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    char result[1000];
    int j = 0;

    if (scanf(" %[^\n]", str) == 1) {
        for (int i = 0; str[i] != '\0'; i++) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                continue;
            result[j++] = str[i];
        }
        result[j] = '\0';
        printf("%s\n", result);
    }
    return 0;
}
