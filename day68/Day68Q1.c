/*
Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int nums[1000];

    if (fgets(line, sizeof(line), stdin) != NULL) {
        char *start = strchr(line, '[');
        if (!start) start = strchr(line, '=');
        char *p = start ? start + 1 : line;

        int n = parse_ints(p, nums);
        if (n == 0) return 0;

        int expected_sum = n * (n + 1) / 2;
        int actual_sum = 0;
        for (int i = 0; i < n; i++) {
            actual_sum += nums[i];
        }

        printf("%d\n", expected_sum - actual_sum);
    }
    return 0;
}
