

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,j,k,x,y,z;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int l=s.length();
        s=s.substr(1,l-1);
        l--;
        j=0;
        for(i=0;i<l;i++)
        {
            x=(int)s[i];
            if(x<=90)
            {
                y=90-x;
                y+=65;
                z=y+32;
            }
            else
            {
                y=122-x;
                y+=97;
                z=y-32;
            }
            z=abs(z-x);
            k=pow(z,l-i);
            j+=k;
            j%=62;
        }
        if(j<=25)
            j+=65;
        else if(j<=51)
            j+=97-26;
        else
            j+=48-52;
        char c=(char)j;
        cout<<c;
    }
    return 0;
}
