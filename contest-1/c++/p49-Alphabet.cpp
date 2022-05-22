// Write a program to check whether a given character is an alphabet or not.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char c;
    cin>>c;
    if((c>=65&&c<=90)||(c>=97&&c<=122))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
