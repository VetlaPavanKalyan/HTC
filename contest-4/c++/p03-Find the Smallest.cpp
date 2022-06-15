// Tom has an array of integers incrementing from 1 to a certain number n. 
// He can swap any two elements a limited number of times. Help Tom to find the smallest possible value array that can be created by satisfying the below conditions.

// Note:

// The given array of integers are unique.
// Elements in the array need not be in sorted order.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,i,j,k,x,y,z;
    cin>>n>>k;
    vector <int> a,b;
    for(i=0;i<n;i++)
    {
        cin>>j;
        a.push_back(j);
        b.push_back(j);
    }
    sort(a.begin(),a.end());
    vector <int> :: iterator it;
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            if(k)
            {
                it=find(b.begin()+i,b.end(),a[i]);
                x=b[i];
                b[i]=a[i];
                k--;
                b[it-b.begin()]=x;
            }
        }
        cout<<b[i]<<" ";
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
