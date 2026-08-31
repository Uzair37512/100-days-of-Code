Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int fact(int n){ int f=1; for(int i=1;i<=n;i++)f*=i; return f; }
int main(){ int n,s=0,t; if(scanf("%d",&n)==1){ t=n; while(t){ s+=fact(t%10); t/=10; } if(s==n) printf("Strong number\n"); else printf("Not strong number\n"); } return 0; }
