// At a bill counter, there is a queue of customers. Each customer is required to pay Rs.50, and the customers can give either Rs.50 or Rs.100 or Rs.200 for the bill payment. 
// The required change must be provided accordingly. 
// Initially, there is no change available. Check whether each customer can be provided with the correct change or not.
// If yes, print 'yes' and also print the no.of notes of Rs.50, Rs.100 and Rs.200 which are remaining.
// If no, print 'no' and print the no.of notes of Rs.50, Rs.100 and Rs.200 which are remaining till that customer.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int a=0,b=0,c=0,i,j,k,n,x,y,z;
    cin>>n;
    int a1[n];
    for(i=0;i<n;i++)
        cin>>a1[i];
    for(i=0;i<n;i++)
    {
        if(a1[i]==50)
            a++;
        else if(a1[i]==100)
        {
            if(a)
            {
                b++;
                a--;
            }
            else
            {
                b++;
                break;
            }
        }
        else
        {
            if(a)
            {
                if(b)
                {
                   a--;
                b--;
                c++;  
                }
                else
                {
                    if(a>=3)
                    {
                        a-=3;
                        c++;
                    }
                    else
                    {
                        c++;
                        break;
                    }
                }
            }
            else
            {
             c++;
                break;
            }
        }
    }
    if(i==n)
        cout<<"yes\n";
    else
        cout<<"no\n";
    cout<<a<<" "<<b<<" "<<c;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
