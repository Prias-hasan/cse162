/* Write a program in C that takes a character input from the user and identifies whether it is a vowel or a
consonant.*/
#include<stdio.h>
int main(){
char ch;
printf("Enter a character: ");
    scanf("%c", &ch);



    
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            printf("its a vowel:'%c'",ch);
        }
                else{
                    printf("its not a vowel");
               
               
             }}
             else{
                printf("input a valid letter");
             }
        }
    
