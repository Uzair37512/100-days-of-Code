Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main(){ int n; if(scanf("%d",&n)==1){ int a[n],max1=-2147483648,max2=-2147483648; for(int i=0;i<n;i++){ scanf("%d",&a[i]); if(a[i]>max1){ max2=max1; max1=a[i]; } else if(a[i]>max2 && a[i]!=max1) max2=a[i]; } printf("Second largest = %d\n",max2); } return 0; }
