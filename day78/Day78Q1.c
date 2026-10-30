/*
Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("text.txt", "r");

    if (fp == NULL) {
        fp = fopen("text.txt", "w");
        if (fp != NULL) {
            fputs("Welcome to C language", fp);
            fclose(fp);
            fp = fopen("text.txt", "r");
        }
    }

    if (fp == NULL) {
        printf("Error: Could not open text.txt\n");
        return 1;
    }

    int vowels = 0, consonants = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower((unsigned char)ch);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
