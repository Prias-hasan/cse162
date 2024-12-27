#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter side a:");
    scanf("%f",&a);
    printf("enter side b:");
    scanf("%f",&b);
    printf("enter side c:");
    scanf("%f",&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        printf("it is possible to creat a triangle with %.2f,%.2f&%.2f",a,b,c);}
        else {
printf("there is no chance to creat a triangle ");
        }
        return 0;
    
}