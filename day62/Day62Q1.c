/*
Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

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
    int arr[1000];
    if (fgets(line, sizeof(line), stdin) != NULL) {
        int n = parse_ints(line, arr);
        if (n == 0) return 0;

        long long maxSoFar = arr[0];
        long long currentMax = arr[0];

        for (int i = 1; i < n; i++) {
            currentMax = (arr[i] > currentMax + arr[i]) ? arr[i] : (currentMax + arr[i]);
            if (currentMax > maxSoFar) maxSoFar = currentMax;
        }
        printf("%lld\n", maxSoFar);
    }
    return 0;
}
