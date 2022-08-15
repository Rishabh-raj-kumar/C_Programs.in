#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char *data;
    struct node *next;
};

struct node *newNode(char *d){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));

    ptr -> data=d;
    ptr -> next=NULL;

    return ptr;
}

void reverse(struct node **root)
{
    struct node *Current=*root;
    struct node *prev=NULL,*next=NULL;

    while(Current != NULL){
        next=Current->next;
        Current -> next=prev;
        prev=Current;
        Current=next;
    }
    *root=prev;
}

void printList(struct node *root1)
{
     while(root1 != NULL){
        printf("%s -> ",root1 -> data);
        root1= root1-> next;
    }
}

void shortList(struct node **root)
{
    struct node *Current=*root,*index=NULL;

    if(Current == NULL){
        return;
    }else{
        while(Current != NULL)
        {
            char *temp;
            index= Current->next;
            while(index != NULL)
            {
                if(strcmp(Current -> data , index -> data) > 0){
                     temp=Current->data;
                     Current ->data=index -> data;
                     index -> data=temp;
                }
                index = index -> next;
            }
            Current = Current->next;
        }
    }
}
int main()
{
    struct node *root1=newNode("zeeshop");
    struct node *root2=newNode("Bimci");
    struct node *root3=newNode("vinci");
    struct node *root4=newNode("monalis");

    root1 -> next = root2;
    root2 -> next = root3;
    root3 -> next = root4;
    root4 -> next = NULL;

    printf("Given data : ");
    printList(root1);
    printf("NULL\n\n");

    printf("Data in Reversed Order : ");
    reverse(&root1);
    printList(root1);
    printf("NULL\n\n");

    printf("Data in sorted Order : ");
    shortList(&root1);
    printList(root1);
    printf("NULL\n\n");

    printf("Sorted Data in Reversed Order : ");
    shortList(&root1);
    reverse(&root1);
    printList(root1);
    printf("NULL\n\n");

    return 0;
}