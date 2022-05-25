// Write a program to print the corner elements of a matrix.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m, n;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            cin>>arr[i][j];
            if((i==0||i==n-1)&&(j==0||j==m-1)) cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}
