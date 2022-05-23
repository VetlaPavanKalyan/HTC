// write a program to print sum of two matrix.

#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m;
    cin>>n>>m;
    int arr[n][m], arr2[n][m], sum[n][m] = {0};
    for(int i=0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            cin>>arr2[i][j];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
