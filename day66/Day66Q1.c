/*
Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

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
        if (total < 3) return 0;
        int target = values[total - 1];
        int n = total - 1;

        int found = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (values[i] + values[j] == target) {
                    printf("%d %d\n", i, j);
                    found = 1;
                    break;
                }
            }
            if (found) break;
        }
        if (!found) printf("-1 -1\n");
    }
    return 0;
}
