// Write a program to print the product of sum of principal diagonal elements and secondry diagonal elements.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int r,c,i,j,k,x,y;
    cin>>r;
    int a[r][r];
    x=0;
    y=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            cin>>a[i][j];
            if(i==j)
            x+=a[i][j];
            if(i==r-j-1)
                y+=a[i][j];
        }
    }
    x*=y;
    cout<<x;
    
    return 0;
}
