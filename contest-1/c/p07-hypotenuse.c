#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a,b,c;
    scanf("%f%f",&a,&b);
    c=sqrt(pow(a,2) + pow(b,2));
    printf("%.2f",c);
    return 0;
}
