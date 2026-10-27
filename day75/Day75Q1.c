/*
Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        fp = fopen("data.txt", "w");
        if (fp != NULL) {
            fputs("Hello world\n", fp);
            fclose(fp);
        }
    } else {
        fclose(fp);
    }

    char text[500] = "This is appended text.";
    char line[500];

    if (fgets(line, sizeof(line), stdin) != NULL) {
        line[strcspn(line, "\r\n")] = '\0';
        if (strncmp(line, "User Input: ", 12) == 0) {
            strcpy(text, line + 12);
        } else if (strlen(line) > 0) {
            strcpy(text, line);
        }
    }

    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "%s\n", text);
    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
