#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int s;
    int i=1;
    s=n;
    while(s<m){
        
        printf("%d ",n*i);
        i++;
        s=n*i;
    }
    return 0;
}
