// Given an undirected graph, find whether the graph contains a cycle or not. Print ‘yes’ if cycle exists or ‘no’ if cycle doesn’t exist.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,i,j,k,n,m,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n][n];
        vector <int> c;
        for(i=0;i<n;i++)
        {
            c.push_back(0);
            for(j=0;j<n;j++)
                a[i][j]=0;
        }
        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            a[x-1][y-1]=1;
            a[y-1][x-1]=1;
        }
        c[0]=1;
        y=0;
        x=0;
        z=0;
          for(i=0;i<n;i++)
          {
              if(a[x][i])
              {
                  if(c[i])
                  {
                      if(i!=z)
                          
                      {
                      y=1;
                     //cout<<x<<" "<<i<<" ";
                      break;
                  }}
                  else
                  {
                      c[i]=1;
                      z=x;
                      x=i;
                       i=-1;
                  }
              }
          }
        if(y==1)
            cout<<"yes\n";
        else
            cout<<"no\n";
        
        
    }
    return 0;
}
