// Given two integers base a , power b . Find the power of a rise to b.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b,c;
    cin>>a>>b;
    c=pow(a,b);
    cout<<c;
    return 0;
}
