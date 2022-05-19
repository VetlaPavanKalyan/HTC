#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++){
        printf("%d ",n%i);
    }
    return 0;
}
