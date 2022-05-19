#include<stdio.h>
#include<string.h>

int main() 
{
    char s[100]; 
    scanf("%s", s);
    printf("%d\n", (int)atoi(s));
    printf("%.2f" ,(float) atoll(s)); 
    return 0; 
}
