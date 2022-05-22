// Write a program to print the transpose of a given matrix. 

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int i,j,r,c;

	cin>>r>>c;
	int a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		cin>>a[i][j];
	}
		for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		cout<<a[j][i]<<" ";
	cout<<"\n";
	}
  return 0;
  }
