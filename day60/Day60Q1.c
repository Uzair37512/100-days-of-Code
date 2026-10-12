/*
Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

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
        if (total < 2) return 0;
        int k = values[total - 1];
        int n = total - 1;
        if (k > n || k <= 0) return 0;

        for (int i = 0; i <= n - k; i++) {
            int maxVal = values[i];
            for (int j = 1; j < k; j++) {
                if (values[i + j] > maxVal)
                    maxVal = values[i + j];
            }
            if (i > 0) printf(" ");
            printf("%d", maxVal);
        }
        printf("\n");
    }
    return 0;
}
