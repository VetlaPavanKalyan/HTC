#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdio.h>
int main(){
   int i,j,a,n,number[30];
   int num[30];

   scanf ("%d", &n);
   for (i=0; i<n; ++i){
      scanf ("%d",&num[i]);
   }
   for (i=0; i<n; ++i){
      number[i]=num[i];
   }

   for (i=0; i<n; ++i){
      for (j=i+1; j<n; ++j){
         if (number[i] < number[j]){
            a = number[i];
            number[i] = number[j];
            number[j] = a;
         }
      }
   }
   
    for(i=0;i<n;i++){
        if(num[i]==number[1]){
            printf("%d",i+1);
        }
    }
  return 0;

}
