/*You are given the following series:
1 + 2 + 3 + ... + n
Given the values of first term as firstTerm, number of terms as nosTerms, and interval between
two terms as termInterval, write a code in C to find the sum of the series.
Required Equations:*/







#include<stdio.h>
#include<math.h>
int main (){

int fistTerm,nosTerm, termiInterval;
 printf("give fisttream:");
scanf("%d",&fistTerm);
  printf("give nosterm:");
  scanf("%d",&nosTerm);
  printf("give treamInterval:"); 
scanf("%d",&termiInterval);


 int lastTream=fistTerm+(nosTerm-1)*termiInterval;
   int sum=0;
   sum=((fistTerm+lastTream)*nosTerm)/2;
  
  printf("sum is :%d\n",sum);
  return 0;




}
