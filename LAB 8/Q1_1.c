#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *create()
{
    struct Node *node=(struct Node *)malloc(sizeof(struct Node));
    printf("enter the values :-");
    scanf("%d",&node->data);
    node->left=NULL;
    node->right=NULL;
    return (node);
}
int main()
{
    struct Node *root=create();
    root->left=create();
    root->right=create();
    root->left->left=create();
    root->left->right=create();
    root->left->right->left=create();
    root->right->left=create();
     root->right->right=create();
     root->right->right->left=create();
     root->right->right->left->left=create();
     root->right->right->right=create();
     return 0;
}