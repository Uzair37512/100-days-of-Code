#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter the matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for(i = 0; i < rows + cols - 1; i++)
    {
        for(j = 0; j < rows; j++)
        {
            int k = i - j;

            if(k >= 0 && k < cols)
            {
                printf("%d ", a[j][k]);
            }
        }
    }

    return 0;
}