// Given a string s ,you want to print either substring is present in the string or not.

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s1, s2;
    getline(cin,s1);
    getline(cin, s2);
    
    if (s1.find(s2) != string::npos) {
    cout << "yes";
    } 
    else cout<<"no";
    return 0;
}
