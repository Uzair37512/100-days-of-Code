Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main(){ int n,k; if(scanf("%d",&n)==1){ int a[n+1]; for(int i=0;i<n;i++) scanf("%d",&a[i]); scanf("%d",&k); int i=n-1; while(i>=0 && a[i]>k){ a[i+1]=a[i]; i--; } a[i+1]=k; for(int j=0;j<=n;j++) printf("%d ",a[j]); printf("\n"); } return 0; }
