// Given two numbers a and b, write a program to print the LCM of a and b.

#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
        if(a==0) return b;
        else if(b==0) return a;
        else return gcd(b, a%b);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    
    int a,b;
    cin>>a>>b;
    int ans = (a*b)/gcd(a,b);
    cout<<ans;
    return 0;
}
