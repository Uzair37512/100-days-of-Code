#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j, sum = 0;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}