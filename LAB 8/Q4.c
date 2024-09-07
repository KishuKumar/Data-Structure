#include<stdio.h>
#include<stdlib.h>
#include
struct Node {
    int data;
    struct node * left;
    struct node *right;
};
struct node *create(){

    struct Node *node=(struct Node*)malloc(sizeof(struct Node));
    scanf("%d",&node->data);
    node->left=NULL;
    node->right=NULL;
    return (node);
}
void preorder(struct Node *node )
{
    if(node!=NULL)
    {
        if((node->right==NULL && node->left!=NULL)||(node->left==NULL && node->right!=NULL))
        printf("%d",node->data);
        preorder(node->left);
        preorder(node->right);
    }
}
int main()
{
    struct Node *node=create();
    preorder(root);
}