Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
int main(){ int r,c,s=0; if(scanf("%d %d",&r,&c)==2){ int a[r][c]; for(int i=0;i<r;i++) for(int j=0;j<c;j++){ scanf("%d",&a[i][j]); s+=a[i][j]; } printf("Sum = %d\n",s); } return 0; }
