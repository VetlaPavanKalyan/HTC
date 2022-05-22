// Given two arrays, find the intersection elements of the two arrays and print them as the output.
//The intersection of two arrays will contain the common elements of the two arrays. If there are no common elements between the arrays, print -1.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    int n,i,j,k;
    set <int> s;
    int x=0;
    cin>>n;
    while(n--)
    {
        cin>>j;
        s.insert(j);
    }
    cin>>n;
    set<int>:: iterator it;
    
    while(n--)
    {
        cin>>j;
        it=s.find(j);
        if(it!=s.end())
        {
            cout<<j<<" ";
            x++;
        }
    }
    if(x==0)
        cout<<"-1";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
