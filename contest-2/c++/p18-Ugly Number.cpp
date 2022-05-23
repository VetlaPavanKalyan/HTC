// Write a program to check whether a given number n is Ugly or not.
// Note :
// A number is considered to be ugly if its only prime factors are 2, 3 or 5.
// An ugly number U can be expressed as: U = 2^a * 3^b * 5^c, where a, b and c are non-negative integers.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,k,x,y,z,n;
    cin>>n;
    x=0;
    y=0;
    z=0;
    while(!(n%5))
    {
        n/=5;
    }
   
    while(!(n%3))
    {
        n/=3;
    }
      while(!(n%2))
    {
        n/=2;
    }
    if(n>2)
        cout<<"not ugly";
    else
        cout<<"ugly";
    return 0;
}
