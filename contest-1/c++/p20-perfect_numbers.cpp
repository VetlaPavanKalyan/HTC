// Given an input number n, print ‘yes’ if it is a perfect number else print ‘no’.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int sum =0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0) sum+=i;
    }
    if(sum==n) cout<<"yes";
    else cout<<"no";
    return 0;
}
