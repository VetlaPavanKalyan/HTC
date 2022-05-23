#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,a;
    scanf("%d",&n);
    a=floor(sqrt(n));
    printf("%d",(a+1)*(a+1));
    return 0;
}
