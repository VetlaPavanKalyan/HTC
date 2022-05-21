// Given a number n, write a program to print first n numbers of fibonacci series.

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a =0;
    int b = 1;
    int c;
    int n;
    cin>>n;
    
    while(n--)
    {
        cout<<a<<" ";
        c = a;
        a = b;
        b = b+c;
    }
    return 0;
}
