// Calculation of hypotenuse of a right angle triangle.

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float a,b;
    cin>>a>>b;
    
    float ans = sqrt(a*a + b*b);
    printf("%.2f", ans);
    return 0;
}
