/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

int extract_quotes(char *line, char *s1, char *s2) {
    char *q1 = strchr(line, '\"');
    if (!q1) return 0;
    char *q2 = strchr(q1 + 1, '\"');
    if (!q2) return 0;
    *q2 = '\0';
    strcpy(s1, q1 + 1);

    char *q3 = strchr(q2 + 1, '\"');
    if (!q3) return 0;
    char *q4 = strchr(q3 + 1, '\"');
    if (!q4) return 0;
    *q4 = '\0';
    strcpy(s2, q3 + 1);
    return 1;
}

int main() {
    char line[2000];
    char s1[1000] = "", s2[1000] = "";

    if (fgets(line, sizeof(line), stdin) != NULL) {
        if (!extract_quotes(line, s1, s2)) {
            sscanf(line, "%s %s", s1, s2);
        }

        if (strlen(s1) != strlen(s2)) {
            printf("Not Anagram\n");
            return 0;
        }

        int count[256] = {0};
        for (int i = 0; s1[i] != '\0'; i++) {
            count[(unsigned char)s1[i]]++;
            count[(unsigned char)s2[i]]--;
        }

        for (int i = 0; i < 256; i++) {
            if (count[i] != 0) {
                printf("Not Anagram\n");
                return 0;
            }
        }
        printf("Anagram\n");
    }
    return 0;
}
