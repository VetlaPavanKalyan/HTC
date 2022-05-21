#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b,s=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++) 
        s=s+i;
    printf("%d",s);
    return 0;
}
