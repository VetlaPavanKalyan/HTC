#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        if((i%3==0)&&(i%5==0)){
            printf("FIZZBUZZ\n");
        }
        else if(i%5==0){
            printf("BUZZ\n");
        }
        else if(i%3==0){
            printf("FIZZ\n");
        }
        else{
            printf("%d\n",i);
        }
    }
    return 0;
}
