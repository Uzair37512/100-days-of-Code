Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main(){ int n,s=0; if(scanf("%d",&n)==1){ for(int i=1;i<=n/2;i++) if(n%i==0) s+=i; if(s==n) printf("Perfect number\n"); else printf("Not perfect number\n"); } return 0; }
