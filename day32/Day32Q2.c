Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main(){ int n; if(scanf("%d",&n)==1){ if(n<0)n=-n; int f[10]={0}; while(n){ f[n%10]++; n/=10; } int maxf=-1, maxd=-1; for(int i=0;i<10;i++) if(f[i]>maxf){maxf=f[i]; maxd=i;} printf("Digit %d occurs most times\n",maxd); } return 0; }
