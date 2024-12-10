/* Write a program in C that calculates total monthly salary of a person given that the person gets N as
basic salary in addition to 20% of basic as house rent and 10% of basic as conveyance allowance.
Unfortunately, there is also 5% tax deduction as well. Consider N as a floating-point value provided by
the user.
*/


#include<stdio.h>
int main (){
    float n;
    printf("enter the basic salary :");
    scanf("%f",&n);
    float total_salary =n*(1+.1+.2-.05);
    printf("the total salary is :%f",total_salary);
    return 0  ;
    
}