/*
Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];

    if (scanf(" %s", s1) == 1 && scanf(" %s", s2) == 1) {
        if (strlen(s1) != strlen(s2)) {
            printf("Not anagrams\n");
            return 0;
        }
        int count[256] = {0};
        for (int i = 0; s1[i] != '\0'; i++) {
            count[(unsigned char)s1[i]]++;
            count[(unsigned char)s2[i]]--;
        }
        for (int i = 0; i < 256; i++) {
            if (count[i] != 0) {
                printf("Not anagrams\n");
                return 0;
            }
        }
        printf("Anagrams\n");
    }
    return 0;
}
