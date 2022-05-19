// Given an input number, print the factorial of the number.

#include <iostream>
#include <algorithm>
using namespace std;

int fact(int n)
{
    if(n==0||n==1) return 1;
    else return n*fact(n-1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
