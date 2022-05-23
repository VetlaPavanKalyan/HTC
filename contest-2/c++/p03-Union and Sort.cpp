// Given two arrays, find the union of the two arrays and print the resultant union array in sorted manner. 
// The union of two arrays will contain all the elements of the two arrays, the common elements will appear only once instead of multiple times.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,j,k;
    set<int> s;
    cin>>n;
    while(n--)
    {
        cin>>j;
        s.insert(j);
    }
    cin>>n;
     while(n--)
    {
        cin>>j;
        s.insert(j);
    }
    set<int>::iterator i;
    for(i=s.begin();i!=s.end();i++)
        cout<<*(i)<<" ";
    return 0;
}
