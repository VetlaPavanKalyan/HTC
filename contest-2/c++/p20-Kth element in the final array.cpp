// Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K. 
// The task is to find the element that would be at the k’th position of the final sorted merged array.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,k;
    cin>>n;
    vector <int> v;
    for(i=0;i<n;i++)
    {
        cin>>j;
        v.push_back(j);
    }
    k=n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    cin>>k;
    cout<<v[k-1];
    return 0;
}
