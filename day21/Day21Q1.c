Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>
int main(){ int n; if(scanf("%d",&n)==1){ if(n<0)n=-n; int l=n%10; int d=(int)log10(n); int f=n/(int)(pow(10,d)); int m=n%(int)(pow(10,d)); m=m/10; int r=l*(int)(pow(10,d)) + m*10 + f; printf("%d\n",r); } return 0; }
