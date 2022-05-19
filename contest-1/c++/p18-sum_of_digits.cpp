// Write a program to print the sum of all the digits in a given input number.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long int n;
    cin>>n;
    int ans =0;
    while(n)
    {
        ans += n%10;
        n /= 10;
    }
    cout<<ans;
    return 0;
}
