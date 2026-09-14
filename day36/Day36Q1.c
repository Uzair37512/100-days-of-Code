// Q71 Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>

int main() {
    int r, c;

    if (scanf("%d %d", &r, &c) == 2) {
        int a[r][c];

        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                scanf("%d", &a[i][j]);

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                printf("%d ", a[i][j]);
            printf("\n");
        }
    }

    return 0;
}
