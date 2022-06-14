// John is building his house. He wants to tile the floors of all the rooms such that the number of tiles used for tiling a certain room is minimum.
// Help John to calculate the total cost for tiling the whole house satisfying the below case
// Note-
// The dimensions of all the rooms in the house need not to be same.
// Shape of the tile is square.
// Same tile should be used to tile the whole floor of a certain room.
// The cost of each such tile is equal to the perimeter of the room.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long int gcd(long int a,long int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    long int n,i,j,k,x,y,z;
           cin>>n;
            x=0;
            for(i=0;i<n;i++)
            {
               cin>>y>>z;
                j=2*(y+z);
                j*=y*z;
                k=gcd(y,z);
                k*=k;
                j/=k;
                x+=j;
                x%=1000000007;
            }
cout<<x<<"\n";  
    return 0;
}

