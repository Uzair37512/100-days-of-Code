/*
Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
#include <stdio.h>
#include <stdlib.h>

int parse_ints(char *str, int *arr) {
    int count = 0;
    char *p = str;
    while (*p) {
        while (*p && !(*p == '-' || (*p >= '0' && *p <= '9'))) p++;
        if (*p) {
            char *end;
            arr[count++] = (int)strtol(p, &end, 10);
            p = end;
        }
    }
    return count;
}

int main() {
    char line[4096];
    int values[1000];
    if (fgets(line, sizeof(line), stdin) != NULL) {
        int total = parse_ints(line, values);
        if (total < 1) return 0;
        int x = values[total - 1];
        int n = total - 1;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (values[i] >= x) {
                ans = i;
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
