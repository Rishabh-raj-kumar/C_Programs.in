#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};

void add_beg(struct node *head,int);

int main(){
    struct node *head=malloc(sizeof(struct node));
    head -> data =45;
    head -> link = NULL;

    struct node *ptr=malloc(sizeof(struct node));
    struct node *One=malloc(sizeof(struct node));
    struct node *two =malloc(sizeof(struct node)); 
    struct node *Three=malloc(sizeof(struct node));
    ptr -> data=98;
    ptr -> link=NULL;
    One -> data=90;
    One -> link=NULL;
    two -> data=40;
    two -> link=NULL;
    Three -> data=70;
    Three -> link =NULL;

    head -> link=ptr;
    ptr -> link=One;
    One -> link=two;
    two -> link =Three;

    int data=5;

    add_beg(head,data);

    ptr=head;
    while(ptr !=NULL){
        printf("%d \n",ptr -> data);
        ptr=ptr -> link;
    }
    return 0;
}
void add_beg(struct node *head,int d)
{
    struct node *ptr=malloc(sizeof(struct node));
    ptr -> data=d;
    ptr -> link =NULL;

    ptr -> link=head;
    head =ptr;
}