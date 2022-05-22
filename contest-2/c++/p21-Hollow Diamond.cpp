// Write a program to take number n and print a Hollow Diamond shape .

// Sample input : 5
// Sample output :

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
    
      
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,j,k,l;
   cin>>n;
    for(i=0;i<n*2-1;i++){
        k=i;
        if(i>=n){
            k=n*2-2-i;
        }
        for(j=0;j<n-k-1;j++)
         cout<<" ";
        if(k==0)
            cout<<"*";
        else{
            printf("*");
            for(l=0;l<k*2-1;l++)
               cout<<" ";
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
