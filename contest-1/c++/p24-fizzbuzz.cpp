// You need to write a program that prints the numbers from 1 to n such that:

// If the number is a multiple of 3, you need to print "Fizz" instead of that number.
// If the number is a multiple of 5, you need to print "Buzz" instead of that number.
// If the number is a multiple of both 3 and 5, you need to print "FizzBuzz" instead of that number.


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m;
    cin>>m;
    for(int n=1; n<=m; n++)
    {
        if(n%3==0&&n%5==0) cout<<"FIZZBUZZ\n";
        else if(n%3==0) cout<<"FIZZ\n";
        else if(n%5==0) cout<<"BUZZ\n";
        else cout<<n<<"\n";
    }
    return 0;
}
