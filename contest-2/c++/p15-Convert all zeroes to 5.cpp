// You are given an integer N. You need to convert all zeroes of N to 5.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char c;
    while(cin>>c)
    {
        if(c=='0')
            cout<<'5';
        else
            cout<<c;
    }
    return 0;
}
