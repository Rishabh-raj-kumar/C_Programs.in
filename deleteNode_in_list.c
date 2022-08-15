#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *newNode(int d)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));

    ptr -> data=d;
    ptr -> next=NULL;

    return ptr;
}
void PrintList(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d ~> ",ptr -> data);
        ptr= ptr -> next;
    }
}
void dleteNodefirst(struct node **root)
{
    struct node *temp=*root;

    *root=(*root) -> next;
    free(temp);
}
void deleteNodeLast(struct node **root)
{
    struct node *end=*root;
    struct node *prev=NULL;
    while(end -> next)
    {
        prev=end;
        end=end->next;
    }
    prev -> next=NULL;
}
void deleteAtPos(struct node **root,int pos)
{
    struct node *temp=*root;
    struct node *prev=*root;

    for(int i=0;i<pos;i++)
    {
        if(i==0 && pos == 1)
        {
            *root=(*root) -> next;
            free(temp);
        }
        else if(i == pos -1 && temp)
              {
                prev -> next=temp -> next;
                free(temp);
              }
        else{
            prev=temp;
            if(prev == NULL)
            {
                break;
            }
            temp = temp -> next;
        }
    }
}
int main()
{
    struct node *ptr1,*ptr2,*ptr3,*ptr4,*ptr5,*ptr6,*ptr7,*ptr8,*ptr9,*ptr10;

    ptr1=newNode(10);
    ptr2=newNode(20);
    ptr3=newNode(30);
    ptr4=newNode(40);
    ptr5=newNode(50);
    ptr6=newNode(60);
    ptr7=newNode(70);
    ptr8=newNode(80);
    ptr9=newNode(90);
    ptr10=newNode(100);

    ptr1 -> next=ptr2;
    ptr2 -> next=ptr3;
    ptr3 -> next=ptr4;
    ptr4 -> next=ptr5;
    ptr5 -> next=ptr6;
    ptr6 -> next=ptr7;
    ptr7 -> next=ptr8;
    ptr8 -> next=ptr9;
    ptr9 -> next=ptr10;
    ptr10 -> next=NULL;

    PrintList(ptr1);
    printf("NULL \n");

    dleteNodefirst(&ptr1);
    PrintList(ptr1);
    printf("NULL \n");

    deleteNodeLast(&ptr1);
    PrintList(ptr1);
    printf("NULL \n");

    deleteAtPos(&ptr1,2);
    PrintList(ptr1);
    printf("NULL \n");
    return 0;
}
