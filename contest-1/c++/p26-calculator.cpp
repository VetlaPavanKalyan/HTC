// This program takes an arithmetic operator +, -, *, / and two operands from the user. Then, it performs the calculation on the two operands depending upon the operator entered by the user.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  char op;
  int n,m;
  scanf("%d %d ",&n,&m);
  op=getchar();
  switch(op){
    case '+':
      printf("%d",n+m);
      break;
    case '-':
      printf("%d",n-m);
      break;
    case '*':
      printf("%d",n*m);
      break;
    case '/':
      printf("%d",n/m);
      break;
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
