// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i=0,j;
    cin>>n;
    int k;
    for(j=0;j<n;j++)
    {
        cin>>k;
        i^=k;
    }
    cout<<i;
    return 0;
}
