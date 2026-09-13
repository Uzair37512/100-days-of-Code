Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main(){ int n,k,f=-1; if(scanf("%d",&n)==1){ int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]); scanf("%d",&k); for(int i=0;i<n;i++) if(a[i]==k){f=i;break;} if(f!=-1) printf("Found at index %d\n",f); else printf("Not found\n"); } return 0; }
