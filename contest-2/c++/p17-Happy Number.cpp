// Write a program to check whether given number is Happy Number or not.

// Note :
// A number is called a Happy Number if it leads to 1 after a sequence of steps where in each step number is replaced by the sum of squares of its digits 
// that is if we start with Happy Number i=and keep replacing with digits square sum, we reach 1.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
# include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,k,x,y,z;
    set <int> s;
    set <int> :: iterator it;
    x=0;
    cin>>n;
    s.insert(n);
    while(1)
    {
        y=0;
        while(n)
        {
         z=n%10;
            z*=z;
            y+=z;
            n/=10;
        }
        if(y==1)
            break;
        if(s.find(y)!=s.end())
        {
            x=1;
            break;
        }
        s.insert(y);
        n=y;
    }
    if(x==1)
        cout<<"no";
    else
        cout<<"yes";
    return 0;
}
