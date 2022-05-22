// An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.

// You are also given three integers sr, sc, and newColor. You should perform a flood fill on the image starting from the pixel image[sr][sc].

// To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with newColor.

// Return the modified image after performing the flood fill.


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;
void solve(int a[50][50],int m,int n,int x,int y,int z,int c)
{
    if((x-1)>=0)
    {
        if(a[x-1][y]==c)
        {
            a[x-1][y]=z;
            solve(a,m,n,x-1,y,z,c); }
    }
    if(x+1<m)
    {
        if(a[x+1][y]==c)
        {
            a[x+1][y]=z;
            solve(a,m,n,x+1,y,z,c); }
    }
    if(y-1>=0)
    {
        if(a[x][y-1]==c) {
                        a[x][y-1]=z;
            solve(a,m,n,x,y-1,z,c); }
    }
    if(y+1<n)
    {
        if(a[x][y+1]==c) {
                        a[x][y+1]=z;
            solve(a,m,n,x,y+1,z,c);  }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int m,n,i,j,k,x,y,z;
    cin>>m>>n;
    int a[50][50];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           cin>>a[i][j];
        }
    }
    cin>>x>>y;
    cin>>z;
    if(a[x][y]!=z)
    solve(a,m,n,x,y,z,a[x][y]);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
