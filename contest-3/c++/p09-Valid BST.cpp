// Given the root of a binary tree, determine if it is a valid binary search tree (BST).

// A valid BST is defined as follows:

// - The left subtree of a node contains only nodes with keys less than the node's key.
// - The right subtree of a node contains only nodes with keys greater than the node's key.
// - Both the left and right subtrees must also be binary search trees.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,k,x,y,z;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    x=0;
    for(i=0;i<n;i++)
    {
        if(i+1<n)
        {
            if(a[i]>a[i+1])
            {
                x=1;
                cout<<"False";
                break;
            }
        }
    }
    if(x==0)
        cout<<"True";
    return 0;
}
