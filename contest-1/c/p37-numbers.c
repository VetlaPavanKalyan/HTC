#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++)
            printf("%d ",++k);
        printf("\n");
    }
    return 0;
}
