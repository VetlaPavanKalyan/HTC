// Given a sorted array containing only 0s and 1s, find the transition point from 0's to 1's.
// Return -1 if there is no such transition.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,k,x;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1]&&i+1<n) {
            cout<<i+1;
        break;
    }
    }
    if(i==n)
        cout<<"-1";
    return 0;
}
