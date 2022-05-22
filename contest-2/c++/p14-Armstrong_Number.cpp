// write a program to check whether the given input is armstrong or not.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,k;
    string s;
    cin>>s;
    int c=s.length();
    i=0;
    j=stoi(s);
    while(j)
    {
    k=j%10;
        k=pow(k,c);
        i+=k;
        j/=10;
    }
    if(i==stoi(s))
        cout<<"yes";
    else
        cout<<"no";
    
    
    
    
    return 0;
}
