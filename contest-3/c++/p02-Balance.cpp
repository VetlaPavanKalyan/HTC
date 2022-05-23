//You are given an input string instr, which contains only parentheses: ( ) { } [ ]. instr will have many such brackets, nested in each other. 
//Your task is to find out if they are balanced or not.

// If instr is properly balanced print 0
// If instr is not properly balanced, then print the position where it is unbalanced
// Note that indexes start from 1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int t=-1;
char st[100];
void ins(char c)
{
    t++;
    st[t]=c;
}
void pop()
{
    t--;
}
int check(char c)
{
    if(t<0) {
        return 1; }
    else if(c==')')
    {
        if(st[t]=='(')
        {
            pop();
            return 0;
        }
        else
            return 1;
    }
     else if(c==']')
    {
        if(st[t]=='[')
        {
            pop();
            return 0;
        }
        else
            return 1;
    }
     else if(c=='}')
    {
        if(st[t]=='{')
        {
            pop();
            return 0;
        }
        else
            return 1;
    }
    else
        return 1;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char c;
    string s;
    cin>>s;
    int i,j,k;
    int l=s.length();
    j=0;
    for(i=0;i<l;i++)
    {
        c=s[i];
        if(c=='{'||c=='['||c=='(')
            ins(c);
        else if(c=='}'||c==')'||c==']')
        {
            j=check(c);
            if(j) {
                j=i+1;
                break;
            }
        }
    }
            cout<<j;
    
    return 0;
}

