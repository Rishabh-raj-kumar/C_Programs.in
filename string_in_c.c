#include<stdio.h>
#include<string.h> //library for string..
#include<stdlib.h> //standard library for memory allocation..
struct stringExmp{
    //declaring string variable in structure..
    char *data;
};
void func(char *dat)
{
    //allocating dynamic memeory in ptr...
    struct stringExmp *ptr=(struct stringExmp*)malloc(sizeof(struct stringExmp));

   //initializing the data of structure using -> pointer.  
    ptr -> data=dat;
    printf("Name : %s \n",ptr -> data);
}
void main()
{
    //string through variables...(it is a set of character).
    char c[10];
    printf("Enter any name : ");

    scanf("%s",&c);

    printf("Name : %s\n",c);

   //passing String in function...
    func("Dr_Strange");
}