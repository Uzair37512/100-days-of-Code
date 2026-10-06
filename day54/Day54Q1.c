/*
Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>
#include <math.h>

int main() {
    char line[256];
    int n;
    if (fgets(line, sizeof(line), stdin) != NULL) {
        char *p = line;
        while (*p && !(*p >= '0' && *p <= '9')) p++;
        if (sscanf(p, "%d", &n) == 1) {
            long long total = (long long)n * (n + 1) / 2;
            long long r = (long long)round(sqrt(total));
            if (r * r == total)
                printf("%lld\n", r);
            else
                printf("-1\n");
        }
    }
    return 0;
}
