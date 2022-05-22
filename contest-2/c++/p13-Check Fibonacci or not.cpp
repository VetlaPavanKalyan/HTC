// Check if a given number N is the Fibonacci number. A Fibonacci number is a number that occurs in the Fibonacci series

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j;
    cin>>n;
    n*=n;
    n*=5;
    i=n-4;
    j=sqrt(i);
    if(i%j==0&&i/j==j)
        cout<<"Yes";
    else 
    {
         i=n+4;
    j=sqrt(i);
    if(i%j==0&&i/j==j)
        cout<<"Yes";
        else
            cout<<"No";
    }
    return 0;
}
