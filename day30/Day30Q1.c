Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>
int main(){ int n,e=0,o=0; if(scanf("%d",&n)==1){ int a[n]; for(int i=0;i<n;i++){ scanf("%d",&a[i]); if(a[i]%2==0)e++; else o++; } printf("Even = %d, Odd = %d\n",e,o); } return 0; }
