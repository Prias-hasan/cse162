#include<stdio.h>
int main (){
    float n;
    printf("enter the basic salary :");
    scanf("%f",&n);
    float total_salary =n*(1+.3-.05);
    printf("the total salary is :%f",total_salary);
    return 0  ;
    
}