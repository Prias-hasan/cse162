// Write a program in C that takes two numbers and an arithmetic operator from the user and does
// calculation based on the operator.
#include<stdio.h>
int main(){
    float a,b;
    char operator;
    printf("give the number 1:");
    scanf("%f",&a);
    printf("give the number 2:");
    scanf("%f",&b);
    printf("give the char:");
    scanf(" %c",&operator);
    if(operator=='+'){
        printf("%f+%f=%f\n",a,b,a+b);
    }
    else if(operator=='-'){
         printf("%f-%f=%f\n",a,b,a-b);
    }
    else if(operator=='*'){
          printf("%f+%f=%f\n",a,b,a*b);
    }
    else if(operator=='/'){
        if(b!=0){
         printf("%f/%f=%f\n",a,b,a/b);
        }
        else{
            printf("divisible by zero is not allowed");
        }
    }
}
