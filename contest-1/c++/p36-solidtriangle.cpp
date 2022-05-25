// Write a Program to take Integer as an Input. And to print the inverted triangle using stars according to given Input.

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
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n-i; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
