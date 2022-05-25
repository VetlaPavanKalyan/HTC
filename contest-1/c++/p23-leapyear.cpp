// Write a program to Check Whether a Year is Leap Year or Not.

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
    if(n%400==0)
    {
        cout<<"Leap year";
    }
    else if(n%4==0&&n%100!=0) cout<<"Leap year";
    else cout<<"Not a leap year";
    return 0;
}
