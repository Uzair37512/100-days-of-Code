/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

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

        long long currentSum = 0;
        for (int i = 0; i < k; i++) currentSum += values[i];
        long long maxSum = currentSum;

        for (int i = k; i < n; i++) {
            currentSum += values[i] - values[i - k];
            if (currentSum > maxSum) maxSum = currentSum;
        }
        printf("%lld\n", maxSum);
    }
    return 0;
}
