// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    int l=s.length();
    int x,y,z,i;
    for( i=0;i<l;i++)
    {
    
        if(count(s.begin(),s.end(),s[i])==1) {
            cout<<i;
    break;
        }}
    if(i==l)
        cout<<"-1";
    return 0;
}
