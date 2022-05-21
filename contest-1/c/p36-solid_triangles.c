#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=i;j>0;j--)
            printf("* ");
        printf("\n");
    }
    return 0;
}
