// Given a string having 0's and 1's only. And it is also a palindrome too. Find the xor of all digi

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char c;
    int x=0,y=0;
    while(cin>>c)
    {
        if(c=='1')
            y++;
    }
    x^=y%2;
    cout<<x;
    return 0;
}
