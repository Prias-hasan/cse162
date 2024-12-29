/*Write a program in C which provides the sum of all the digits present in a given integer N by the user.*/
#include <stdio.h>

int main() {
    int n;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

int digs=0,lastd;
  
while(n>0){
  lastd=n%10;
 digs+=lastd;
 n/=10;

}
printf("sum of digits :%d\n",digs);




}