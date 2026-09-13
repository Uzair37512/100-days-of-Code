Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main(){ int n,k; if(scanf("%d",&n)==1){ int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]); scanf("%d",&k); k%=n; int b[n]; for(int i=0;i<n;i++) b[(i+k)%n]=a[i]; for(int i=0;i<n;i++) printf("%d ",b[i]); printf("\n"); } return 0; }
