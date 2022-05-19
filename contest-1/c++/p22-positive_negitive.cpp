// Write a program to Check Whether a Number is Positive or Negative.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    if(n>0) cout<<"+ve";
    else if(n<0) cout<<"-ve";
    else cout<<-1;
    return 0;
}
