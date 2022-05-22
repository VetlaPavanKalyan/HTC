// Given an array of numbers and a window of size k. Print the maximum of numbers inside the window for each step as the window moves from the beginning of the array.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,k,x,y,z;
    int n;
    cin>>n;
    vector <int> v;
    for(i=0;i<n;i++)
    {
        cin>>j;
        v.push_back(j);
    }
    cin>>k;
    for(i=0;i<=n-k;i++)
    {
        cout<<*max_element(v.begin()+i,v.begin()+i+k)<<" ";
    }
    return 0;
}
