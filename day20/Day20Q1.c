Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main(){ int n,p=1,h=0; if(scanf("%d",&n)==1){ if(n<0)n=-n; while(n){ int d=n%10; if(d%2!=0){ p*=d; h=1; } n/=10; } if(!h)p=1; printf("%d\n",p); } return 0; }
