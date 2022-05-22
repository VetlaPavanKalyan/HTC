// Given an integer array A. write a program to create an array B such that Bi is the product of all elements of A excluding Ai.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
int n,i,j,k,x,y;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    cin>>n;
    int a[n];
    j=1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        j*=a[i];
    }
    for(i=0;i<n;i++)
        cout<<j/a[i]<<" ";
    return 0;
}

