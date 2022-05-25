// Given a number n as input, write a program that finds the next perfect square greater than n and prints its value as the output. 


#include <bits/stdc++.h>
using namespace std;
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,a;
    scanf("%d",&n);
    a=floor(sqrt(n));
    printf("%d",(a+1)*(a+1));
    return 0;
}
