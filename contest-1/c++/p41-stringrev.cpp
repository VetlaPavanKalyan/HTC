// Given a string s ,you want to print the string in reverse order.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    getline(cin, s);
    
    reverse(s.begin(), s.end());
    cout<<s;
    return 0;
}
