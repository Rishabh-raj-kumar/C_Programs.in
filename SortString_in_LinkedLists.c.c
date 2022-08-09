#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char* data;
    struct node *next;
};

struct node *newNode(char* d){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    
    ptr -> data=d;
    ptr -> next = NULL;

    return ptr;
}
void shortList(struct node **head)
{
   struct node *current=*head,*index =NULL;

   if(head == NULL){
    return ;
   }else{
   while(current != NULL)
   {
     index=current -> next;
     char* temp;
     while(index != NULL)
   {
   if( strcmp(current -> data , index -> data)>0 )
   {
      temp=current->data;
      current ->data=index -> data;
      index -> data=temp;
   }
   index =index ->next;
   }
   current = current -> next;
    }
   }
}

int main()
{
    struct node *pointer,*second,*third,*first,*last;

    pointer = newNode("Sachin");
    first = newNode("Rohit");
    second= newNode("Dhoni");
    third = newNode("Sehwag");

    //Additional player
    last = newNode("Jadeja");

    pointer -> next = first;
    first -> next = second;
    second -> next = third;
    third -> next = last;
    last -> next = NULL;

    shortList(&pointer);

    while ( pointer != NULL)
    {
        printf("%s -> ",pointer->data);
        pointer = pointer->next;
    }
    printf("NULL");
    return 0;
}