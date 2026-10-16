/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    char s[1000] = "";

    if (fgets(line, sizeof(line), stdin) != NULL) {
        char *q1 = strchr(line, '\"');
        if (q1) {
            char *q2 = strchr(q1 + 1, '\"');
            if (q2) {
                *q2 = '\0';
                strcpy(s, q1 + 1);
            }
        } else {
            sscanf(line, " %[^\r\n]", s);
        }

        int lastIndex[256];
        for (int i = 0; i < 256; i++) lastIndex[i] = -1;

        int maxLen = 0, start = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            unsigned char c = (unsigned char)s[i];
            if (lastIndex[c] >= start) {
                start = lastIndex[c] + 1;
            }
            lastIndex[c] = i;
            int curLen = i - start + 1;
            if (curLen > maxLen) maxLen = curLen;
        }
        printf("%d\n", maxLen);
    }
    return 0;
}
