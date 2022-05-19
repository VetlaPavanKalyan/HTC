#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fact(n){
        if(n==1){
            return 1;
        }
        else{
            return n*fact(n-1);
        }
    }
int main() {

    int n;
    int ans;
    scanf("%d",&n);
    
    printf("%d",fact(n));
    return 0;
}
