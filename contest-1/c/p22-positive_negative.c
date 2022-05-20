#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>0){
        printf("+ve");
    }
    else if(n<0){
        printf("-ve");
    }
    else{
        printf("-1");
    }
    return 0;
}
