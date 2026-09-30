/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = strlen(str);
        if (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r')) {
            str[--len] = '\0';
        }
        char *word_start = str;
        char *temp = str;

        while (*temp) {
            if (*temp == ' ') {
                reverse(word_start, temp - 1);
                word_start = temp + 1;
            }
            temp++;
        }
        reverse(word_start, temp - 1);
        printf("%s\n", str);
    }
    return 0;
}
