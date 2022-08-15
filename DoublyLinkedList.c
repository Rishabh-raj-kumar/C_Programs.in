#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev,*next;
};

void insertFromt(struct node **root,int d)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));

    ptr -> data = d;

    ptr -> next=(*root);
    ptr -> prev=NULL;

    if(*root != NULL){
        (*root) -> prev=ptr;
    }
    *root=ptr;
}

void insertEnd(struct node **root,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));

    ptr -> data = data;

    ptr -> next = NULL;
    struct node *head=*root;

    if(*root == NULL)
    {
        ptr -> prev = NULL;
        *root = ptr;
        return;
    }

    while(head -> next != NULL)
    {
        head=head -> next;
    }
    head -> next = ptr;
    head -> prev=head;
}
void PrintList(struct node *root)
{
    while(root != NULL)
    {
        printf("%d -> ",root->data);
        root = root->next;
    }
}
int main(){
    struct node *r1=NULL;

    insertEnd(&r1,30);
    insertEnd(&r1,90);
    insertEnd(&r1,40);
    
    insertFromt(&r1,5);
    insertFromt(&r1,10);
    insertFromt(&r1,50);
    insertFromt(&r1,30);

    PrintList(r1);
    printf("NULL \n");
    return 0;
}