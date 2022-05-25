// For a given array of n elements find the maximum element and second element and print their sum.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define INT_MIN -2147483647
#define INT_MAX 2147483647


int main() {
    int max = INT_MIN, min = INT_MAX;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>max) max = arr[i];
        if(arr[i]<min) min = arr[i];
    }
    
    cout<<max + min;
    
    return 0;
}
