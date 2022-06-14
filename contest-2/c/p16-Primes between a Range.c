// Find the prime numbers in the given range [m,n] exclusive of m and n.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int c[100001];
    int i,j,k,n,x,y,z;
    for(i=0;i<100000;i++)
        c[i]=1;
    for(i=2;i<100000;i++)
    {
        if(c[i])
        {
            for(j=2;j*i<100000;j++)
                c[j*i]=0;
        }
    }
    scanf("%d %d",&x,&y);
    for(i=x+1;i<y;i++)
    {
        if(c[i])
            printf("%d ",i);
    }
    return 0;
}
