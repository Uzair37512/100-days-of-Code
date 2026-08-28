Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main(){ int n,s=0; if(scanf("%d",&n)==1){ if(n<0)n=-n; while(n){ s+=n%10; n/=10; } printf("%d\n",s); } return 0; }
