// You are given an array with n elements and an index k find the element of an array which is located at index k and print the same.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int p;
    cin>>p;
    cout<<arr[p];
    return 0;
}
