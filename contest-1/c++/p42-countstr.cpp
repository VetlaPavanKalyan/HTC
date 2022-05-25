// Given a string s ,you want to print the count of uppercase characters and special characters present in the given string.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count = 0;
    string s;
    cin>>s;
    for(unsigned int i = 0; i< s.length(); i++)
    {
        
        if((s[i]>='A' && s[i]<='Z'))
        {
            count++;
        }
        else if(s[i]>='0' && s[i]<='9');
        else if(s[i]>='a' && s[i]<='z'); 
        else
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
