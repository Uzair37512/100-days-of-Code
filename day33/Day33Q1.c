Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main(){ int n,k,f=-1; if(scanf("%d",&n)==1){ int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]); scanf("%d",&k); int l=0, r=n-1; while(l<=r){ int m=l+(r-l)/2; if(a[m]==k){f=m;break;} else if(a[m]<k) l=m+1; else r=m-1; } if(f!=-1) printf("Found at index %d\n",f); else printf("Not found\n"); } return 0; }
