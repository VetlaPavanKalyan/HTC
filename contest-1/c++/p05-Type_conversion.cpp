// convert the string integer into int and float datatype.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
   
    cout<<n<<"\n";
    printf("%.2f", (float)n);
    return 0;
}
