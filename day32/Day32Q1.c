Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main(){ int n1,n2; if(scanf("%d",&n1)==1){ int a[n1]; for(int i=0;i<n1;i++) scanf("%d",&a[i]); scanf("%d",&n2); int b[n2]; for(int i=0;i<n2;i++) scanf("%d",&b[i]); int c[n1+n2]; for(int i=0;i<n1;i++) c[i]=a[i]; for(int i=0;i<n2;i++) c[n1+i]=b[i]; for(int i=0;i<n1+n2;i++) printf("%d ",c[i]); printf("\n"); } return 0; }
