#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
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
