/*
Q124: Take two filenames from the user â€“ a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
#include <string.h>

int main() {
    char src_file[100] = "source.txt";
    char dest_file[100] = "destination.txt";
    char line[256];

    if (fgets(line, sizeof(line), stdin) != NULL) {
        char s[100], d[100];
        if (sscanf(line, "%s %s", s, d) == 2) {
            strcpy(src_file, s);
            strcpy(dest_file, d);
        }
    }

    FILE *src = fopen(src_file, "r");
    if (src == NULL) {
        src = fopen(src_file, "w");
        if (src != NULL) {
            fputs("Learning C File Handling", src);
            fclose(src);
            src = fopen(src_file, "r");
        }
    }

    if (src == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }

    FILE *dest = fopen(dest_file, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file!\n");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", dest_file);
    return 0;
}
