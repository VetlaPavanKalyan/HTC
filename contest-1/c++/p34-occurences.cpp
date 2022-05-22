// Count the no. of occurences of given number in the array

#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, count =0;
    cin>>n;
    int arr[n], val;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>val;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == val) count++;
    }
    cout<<count;
    return 0;
}
