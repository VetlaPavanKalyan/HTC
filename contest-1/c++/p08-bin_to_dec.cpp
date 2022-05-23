// write a program to convert the binary number into its equivalent decimal number.

#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int n;
    cin>>n;
    int ans = 0;
    int i = 0;
    while(n)
    {
        int r = n%10;
        n/=10;
        ans +=  r*pow(2, i);
        i++;
    }
    
    
    cout<<ans;
    return 0;
}
