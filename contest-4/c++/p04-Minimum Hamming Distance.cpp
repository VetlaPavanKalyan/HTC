// You are given a set of binary strings (strings which consist of 0's and 1's only). 
// Your task is to find the minimum hamming distance between any of the two strings in the given set. 
// Hamming distance between two strings of equal length is the number of positions at which the corresponding symbols are different.

// Note: Length of all the binary strings in each test case are same

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int co(string a,string b)
{
    int x=0;
    int l=a.length();
    for(int i=0;i<l;i++)
    {
        if(a[i]!=b[i])
        x++;
        }
    return x;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,i,j,k,x,y,z,n;
    cin>>t;
    while(t--)
    {
        x=40;
        cin>>n;
        string a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                x=min(x,co(a[i],a[j]));
            }
        }
        cout<<x<<"\n";
    }
    return 0;
}
