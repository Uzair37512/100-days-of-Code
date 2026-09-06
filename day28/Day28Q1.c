Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
int is_prime(int n){ if(n<2)return 0; for(int i=2;i*i<=n;i++) if(n%i==0)return 0; return 1; }
int main(){ int n; if(scanf("%d",&n)==1){ for(int i=1;i<=n;i++) if(is_prime(i)) printf("%d ",i); printf("\n"); } return 0; }
