//Write a program in C to find the letter grade of student given the obtained marks in mid as M, final as
//F, quiz as Q, presentation as P, and assignment as A.


#include<stdio.h>
int main(){
float M,F,Q,P,A ,marks ;
printf("obtained marks in mid:");
scanf("%f",&M);
printf("obtained marks in final:");
scanf("%f",&F);
printf("obtained marks in quiz:");
scanf("%f",&Q);
printf("obtained marks in presentation :");
scanf("%f",&P);
printf("obtained marks in assignment :");
scanf("%f",&A);
 marks=M+F+Q+P+A;
if(marks>=80&&marks<=100){
printf("A+");
}
else if(marks>=75)
{ printf("A");

    }
    else if(marks>=70){
        printf("A-");
    }
    else if(marks>=65){
        printf("B+");
    }
    else if(marks>=60){
        printf("B");
    }
    else if(marks>=55){
        printf("B-");
    }
    else if(marks>=50){
        printf("c+");
    }
    else if(marks>=45){
        printf("C");
    }
    else if(marks>=40){
        printf("D");
    }
    else if(marks>=40){
        printf("F");
    }
    
    
}

