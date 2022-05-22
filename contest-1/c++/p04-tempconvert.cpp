// Write a program to convert the temperature from Celsius to Faranheit.

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    double c;
    cin>>c;
    double f = c*9/5+32;
    cout<<f;
    return 0;
}
