// For a given array of n elements count the no.of positive numbers and negative numbers.

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int arr[n];
    int pcount=0, ncount=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>0) pcount++;
        else if(arr[i]<0) ncount++;
    }
    cout<<pcount<<" "<<ncount;
    return 0;
}
