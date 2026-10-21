/*
Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

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
    int seen[10000] = {0};

    if (fgets(line, sizeof(line), stdin) != NULL) {
        char *start = strchr(line, '[');
        if (!start) start = strchr(line, '=');
        char *p = start ? start + 1 : line;

        int n = parse_ints(p, nums);
        int duplicate = -1;

        for (int i = 0; i < n; i++) {
            int val = nums[i];
            if (val >= 0 && val < 10000) {
                if (seen[val]) {
                    duplicate = val;
                    break;
                }
                seen[val] = 1;
            }
        }

        if (duplicate != -1) {
            printf("%d\n", duplicate);
        }
    }
    return 0;
}
