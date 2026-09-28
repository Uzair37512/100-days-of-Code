/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    if (scanf(" %[^\n]", str) == 1) {
        int freq[26] = {0};
        int len = strlen(str);
        for (int i = 0; i < len; i++) {
            if (str[i] >= 'a' && str[i] <= 'z')
                freq[str[i] - 'a']++;
        }
        char found = '\0';
        for (int i = 0; i < len; i++) {
            if (str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1) {
                found = str[i];
                break;
            }
        }
        if (found != '\0')
            printf("%c\n", found);
        else
            printf("-1\n");
    }
    return 0;
}
