//Write a program in C that takes two angles of a triangle from the user and provides the remaining angles
// value as output with prompt.
#include<stdio.h>
int main(){
 int a,b;  //two angles are a and  b
printf("give angle a=");

 scanf("%d",&a);
 printf("give angle b=");
 scanf("%d",&b);
 printf("the other angle is %d\n=",180-(a+b));


}