#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void bin(long int n){
    int s=0;
    int i=0;
    int p;
    while(n>0){
        p=n%10;
        s=s+(p*(pow(2,i)));
        n=n/10;
        i++;
    }
    printf("%d",s);
}
int main() {
    long int n;
    scanf("%ld",&n);
    bin(n);
    return 0;
}
