#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d",n,i,n*i);
        printf("\n");
    }
    return 0;
}
