#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *next;
};
void print(struct node *head)
{
    while(head != NULL)
    {
        printf("%d -> ",head->data);
        head = head->next;
    }
    printf("NULL");
}
int main()
{
    struct node *head,*first,*second;

    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    first->data=20;
    second->data=30;

    head->next=first;
    first->next=second;
    second->next=NULL;

    print(head);
    return 0;
}