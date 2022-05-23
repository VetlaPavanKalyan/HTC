// Write a program to whether a element is present in the matrix or not.

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,m;
    cin>>n>>m;
    int a;
    int arr[n][m];
    int res = -1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    cin>>a;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==a) res = 1;
        }
    }
    if(res==1) cout<<"Found";
    else cout<<"Not Found";
    return 0;
}
