#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[100];
    int i;
    fgets(s,100,stdin);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>=97 && s[i]<=122)
            s[i]=s[i]-32;
    }
    printf("%s",s);
    return 0;
}
