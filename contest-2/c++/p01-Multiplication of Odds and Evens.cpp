// Find the Product of sum of all even numbers and sum of all odd numbers.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,k;
    i=0;
    j=0;
    cin>>n;
    for(int y=0;y<n;y++)
    {
        cin>>k;
        if(k%2)
            i+=k;
        else
            j+=k;
    }
    cout<<i*j;
    return 0;
}
