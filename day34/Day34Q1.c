Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main(){ int n,p,v; if(scanf("%d",&n)==1){ int a[n+1]; for(int i=0;i<n;i++) scanf("%d",&a[i]); scanf("%d %d",&p,&v); for(int i=n;i>p;i--) a[i]=a[i-1]; a[p]=v; for(int i=0;i<=n;i++) printf("%d ",a[i]); printf("\n"); } return 0; }
