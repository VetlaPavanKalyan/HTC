#include <stdio.h>

int main() {
    int n,m,o,s,i,j;
    char ch;
    scanf("%d %d",&n,&m);
    // ch=getchar();
    scanf(" %c ",&ch);
    scanf("%d",&o);
    s=0;
    for(i=n;i<=m;i++){
        switch(ch){
            case '+':j=i+o;
                s=s+j;
                break;
            case '-':j=i-o;
                s=s+j;
                break;
            case '*':j=i*o;
                s=s+j;
                break;
            case '/':j=i/o;
                s=s+j;
                break;
            case '%':j=i%o;
                s=s+j;
                break;     
        }
    }
    printf("%d",s);
    return 0;
}
