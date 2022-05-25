// Write a program to print the numbers in the following pattern

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int val = 1;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<i+1; j++)
        {
            cout<<val<<" ";
            val++;
        }
        cout<<"\n";
    }
    return 0;
}
