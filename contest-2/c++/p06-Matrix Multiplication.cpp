// Given two matrices of size m1 x n1 and m2 x n2. You need to multiply two matrices and return the product matrix.If multiplication is not possible,print -1.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int i,j,r1,c1,r2,c2;
   
    cin>>r1>>c1;
    int a[r1][c1];
   cin>>r2>>c2;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        cin>>a[i][j];
    }
 
   
    int b[r2][c2],k,c[r1][c2];
   
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        cin>>b[i][j];
    }
    if(c1==r2)
    {
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<c1;k++)
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }    
    }
        for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
cout<<c[i][j]<<" ";
        cout<<"\n";
}}
    else
cout<<"-1";
}
