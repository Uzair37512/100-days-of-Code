Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main(){ int n,p; if(scanf("%d",&n)==1){ int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]); scanf("%d",&p); for(int i=p;i<n-1;i++) a[i]=a[i+1]; for(int i=0;i<n-1;i++) printf("%d ",a[i]); printf("\n"); } return 0; }
