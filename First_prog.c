//This is the header file you need to include in every c program...
#include<stdio.h>
//stdio -> standard input Output...
void main() //Main function...
{
    printf("Enter any Number : ");
    int a;//Integer Variable...
    //scanf -> to take input from user..
     scanf("%d",&a);
    //printf -> to display output to user..
    printf("Hello World... %d",a);
}