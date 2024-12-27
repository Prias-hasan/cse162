/*Write a code in C that takes a character input from the user and identifies whether it is a number, or an
uppercase letter or a lowercase letter or just a symbol.*/
#include<stdio.h>
int main(){
char ch;
printf("Enter a character: ");
    scanf("%c", &ch);

if(ch>='a'&&ch<='z'){
    printf("it is a lower case:'%c'\n",ch);
}
    else if(ch>='A'&&ch<='Z'){
        printf("it is a uper case:'%c'\n",ch);
    }
    else if(ch>='0'&&ch<='9'){
        printf("it is a number:'%c'\n",ch);
    }
}








