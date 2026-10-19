/*
Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parse_array(char *start, char *end, int *arr) {
    int count = 0;
    char *p = start;
    while (p < end) {
        while (p < end && !(*p == '-' || (*p >= '0' && *p <= '9'))) p++;
        if (p < end) {
            char *next;
            arr[count++] = (int)strtol(p, &next, 10);
            p = next;
        }
    }
    return count;
}

int main() {
    char line[4096];
    int a[1000], b[1000];
    if (fgets(line, sizeof(line), stdin) != NULL) {
        char *b1 = strchr(line, '[');
        char *b2 = b1 ? strchr(b1, ']') : NULL;
        char *b3 = b2 ? strchr(b2, '[') : NULL;
        char *b4 = b3 ? strchr(b3, ']') : NULL;

        int n1 = 0, n2 = 0;
        if (b1 && b2 && b3 && b4) {
            n1 = parse_array(b1, b2, a);
            n2 = parse_array(b3, b4, b);
        } else {
            int all[2000];
            int total = parse_array(line, line + strlen(line), all);
            n1 = total / 2;
            n2 = total - n1;
            for (int i = 0; i < n1; i++) a[i] = all[i];
            for (int i = 0; i < n2; i++) b[i] = all[n1 + i];
        }

        int i = 0, j = 0, first = 1;
        while (i < n1 && j < n2) {
            if (!first) printf(" ");
            first = 0;
            if (a[i] <= b[j]) {
                printf("%d", a[i++]);
            } else {
                printf("%d", b[j++]);
            }
        }
        while (i < n1) {
            if (!first) printf(" ");
            first = 0;
            printf("%d", a[i++]);
        }
        while (j < n2) {
            if (!first) printf(" ");
            first = 0;
            printf("%d", b[j++]);
        }
        printf("\n");
    }
    return 0;
}
