/*
Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

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
    int nums[1000];
    if (fgets(line, sizeof(line), stdin) != NULL) {
        int n = parse_ints(line, nums);
        int ans[1000];
        for (int i = 0; i < n; i++) {
            long long prod = 1;
            for (int j = 0; j < n; j++) {
                if (i != j) prod *= nums[j];
            }
            ans[i] = (int)prod;
        }
        printf("[");
        for (int i = 0; i < n; i++) {
            if (i > 0) printf(",");
            printf("%d", ans[i]);
        }
        printf("]\n");
    }
    return 0;
}
