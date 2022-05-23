#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i;
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++) 
        a[i]=a[i-1]+a[i-2];
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
