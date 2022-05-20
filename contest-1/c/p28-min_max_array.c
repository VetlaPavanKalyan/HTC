#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    int i;
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int t;
    for(i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(a[i]<a[j]){
               t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        
        }
    }
    printf("%d",a[1]+a[n]);
    
    
    return 0;
}
