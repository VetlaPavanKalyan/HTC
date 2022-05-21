// Given two integers a and b, print the sum of the integers in the range a and b (a,b inclusive).

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    cin>>a>>b;
    int count=0;
    for(int i=a; i<=b; i++)
    {
        count+= i;
    }
    cout<<count;
    return 0;
}
