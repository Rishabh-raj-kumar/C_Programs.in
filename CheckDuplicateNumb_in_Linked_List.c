#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *newNode(int d)
{
    struct node  *ptr=(struct node*)malloc(sizeof(struct node));

    ptr -> data=d;
    ptr -> next=NULL;

    return ptr;
}
void Display(struct node* root)
{
    printf("Elements in the Root are : ");
    while(root != NULL){
        printf("%d -> ",root -> data);
        root = root -> next;
    }
}
void check(struct node *root){

    struct node *current=root;
    int count =0;
    printf("Duplicate NUMBERS ARE : ");
    while(current != NULL){
        struct node *index=current -> next;
        while(index != NULL){
                if(current -> data == index -> data){
                    printf(" %d -> ",current -> data);
                    break;
           }
           index=index->next;
     }
     current = current -> next;
    }
}
int main()
{
    struct node *root=newNode(10);
    struct node* first1=newNode(20);
    struct node* first2=newNode(20);
    struct node* first3=newNode(30);
    struct node *first4=newNode(30);

    root -> next=first1;
    first1 -> next=first2;
    first2 -> next=first3;
    first3 -> next=first4;
    first4 -> next=NULL;

    Display(root);
    printf("NULL \n");

     check(root);
    printf("NULL \n");
    return 0;
}