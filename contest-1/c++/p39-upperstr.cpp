// Given a string s, Convert that string into uppercase.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    getline(cin, s);
    for(int i=0; i<s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
    cout<<s;
    return 0;
}
