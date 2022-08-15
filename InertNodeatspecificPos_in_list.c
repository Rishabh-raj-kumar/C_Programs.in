#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

//get the sizeof List...
int getCurrentsize(struct node *Node)
{
    int size=0;
    while(Node != NULL)
    {
        Node = Node -> next;
        size++;
    }
    return size;
}
void insertAtPos(int pos,int element,struct node **root)
{
    int size=getCurrentsize(*root);

    struct  node *temp=(struct node *)malloc(sizeof(struct node));
    temp -> data=element;
    temp -> next=NULL;

    if(pos < 0 || pos > size)
    {
        printf("Invalid choice bro....");
    }
    else if( pos == 0)
    {
       temp -> next = *root;
       *root = temp;
    }
    else{

        struct node *head=*root;

        while(--pos){
            head = head -> next;
          }
          //NULL = pos
        temp -> next=head -> next;
        //pos=temp -> data
        head -> next=temp;
    }
}

void PrintList(struct node *root)
{
    while(root != NULL)
    {
        printf("%d -> ",root -> data);
        root = root -> next;
    }
}
int main()
{
    struct node *root=(struct node *)malloc(sizeof(struct node));
    struct node *root1=(struct node*)malloc(sizeof(struct node));
    struct node *root2=(struct node*)malloc(sizeof(struct node));
    struct node *root3=(struct node*)malloc(sizeof(struct node));
    struct node *root4=(struct node*)malloc(sizeof(struct node));
    struct node *root5=(struct node*)malloc(sizeof(struct node));

    root -> data=10;
    root1 -> data=20;
    root2 -> data=30;
    root3 -> data=40;
    root4 -> data=50;
    root5 -> data=60;

    root -> next=root1;
    root1 -> next =root2;
    root2 -> next = root3;
    root3 -> next = root4;
    root4 -> next = root5;
    root5 -> next = NULL;

    PrintList(root);
    printf("NULL \n");

    insertAtPos(1,15,&root);
    PrintList(root);
    printf("NULL \n");
    return 0;
}