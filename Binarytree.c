#include<stdio.h>
#include<stdlib.h>

struct tree{
     int data;
     struct tree *left;
     struct tree *right;
};

struct tree *newTree(int data)
{
    struct tree *root=(struct tree*)malloc(sizeof(struct tree));

    root -> data=data;
    root -> left =NULL;
    root -> right = NULL;

    return root;
}

void PreOrder(struct tree *root){
    if(root == NULL)
    {
        return;
    }

    printf("%d -> ",root -> data);
    PreOrder(root -> left);
    PreOrder(root -> right);
}
void InOrder(struct tree *root){
    if(root == NULL){
        return;	
    }

    InOrder(root -> left);
    printf("%d -> ",root -> data);
    InOrder(root -> right);
}
void PostOrder(struct tree *root){
    if(root == NULL)
    {
        return;
    }

    PostOrder(root -> left);
    PostOrder(root -> right);
    printf("%d -> ",root -> data);
}

int main()
{
    struct tree *root=newTree(10);

    root -> left =newTree(20);
    root -> right = newTree(30);
    root -> left -> left=newTree(40);
    root -> left -> right=newTree(50);
    root -> right -> left=newTree(60);
    root -> right -> right=newTree(70);

    printf("The Tree in PostOrder is : \n");
    PostOrder(root);
    printf("NULL");

    printf("\nThe tree in InOrder is : \n");
    InOrder(root);
    printf("NULL");

    printf("\nThe tree in PreOrder is : \n");
    PreOrder(root);
    printf("NULL");

    return 0;
}