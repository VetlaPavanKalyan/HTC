// Write a program to take two sorted arrays as the input and merge the arrays and get the merge resultant sorted array and print it as the output.

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
    for(i=0;i<n+k;i++)
        cout<<v[i]<<" ";
    return 0;
}
