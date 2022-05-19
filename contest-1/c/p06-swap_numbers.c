#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t;
    t=a[0];
    a[0]=a[n-1];
    a[n-1]=t;
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
