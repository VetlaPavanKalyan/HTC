// Write a program that takes 4 inputs, a lower bound,an upper bound, an operand and an operator. Calculate the sum of that range based on the given operator and operator and output the result as shown in sample test cases.

#include <bits/stdc++.h>
using namespace std;

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
