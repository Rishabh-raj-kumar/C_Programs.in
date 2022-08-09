#include<stdio.h>
#include<stdlib.h>
int stack_arr[5];
int top=-1;

void push(int data){
    int i;
    //top will continously incremented..
    top +=1;
    for(i=top; i>0; i--)
    {
        //if i is greater then 0 shift the value..
        stack_arr[i]= stack_arr[i-1]; 
        //0th place value in 1st place...
        //1st place value in 2nd place..
    }
    //if i is not greater then 0...
    stack_arr[0]=data;
}
int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }else{return 0;}
}
int peek()
{
    if (isEmpty())
    {
        printf("stack underflow");
        exit(1);
    }
    return stack_arr[0]; 
}
void print()
{
    int i;
    if(top == -1)
    {
        printf("stack underflow");exit(1);
    }
    for(i=0;i<=top;i++){
        printf("%d \n",stack_arr[i]);
    }
}
int pop(){
    int i,value;
    value=stack_arr[0];
    for(i=0;i<top;i++){
        stack_arr[i]=stack_arr[i+1];
    }
    top=top-1;
    return value;
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    print();
    int data=peek();
   int res = pop();
   printf("\n %d --> The value to be pop ",res);
    return 0;
}