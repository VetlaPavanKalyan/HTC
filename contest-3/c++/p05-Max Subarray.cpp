// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// A subarray is a contiguous part of an array.
// print the max sum of the subarray.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j,k,x,y,z;
    cin>>n;
    vector <int> v;
    cin>>j;
    v.push_back(j);
    for(i=1;i<n;i++)
    {
        cin>>j;
        v.push_back(v[i-1]+j);
    }
    i=*(min_element(v.begin(),v.end()));
    j=*(max_element(v.begin(),v.end()));
    k=j-i;
    k=k>=j?k:j;
    cout<<k;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
