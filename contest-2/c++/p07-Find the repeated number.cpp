// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
//There is only one repeated number in nums, return this repeated number.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    unordered_map<int,int> um;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        um[temp]++;
        if(um[temp]==2){
            cout<<temp<<endl;
            
        }
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
