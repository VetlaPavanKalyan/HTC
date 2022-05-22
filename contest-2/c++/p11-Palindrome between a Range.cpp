// Print palindromes between the range.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int a,b,x=0,c;
    string y,z;
    cin>>a>>b;
    a++;
    while(a<b)
    {
        y=to_string(a);
        z=y;
        reverse(y.begin(),y.end());
        if(y==z)
        {
            x++;
            cout<<a<<" ";
        }
        a++;
    }
    if(x==0)
        cout<<"No Palindrome Numbers";
    return 0;
}
