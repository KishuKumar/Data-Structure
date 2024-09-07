#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

void *create()
{    
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));

    printf("enter data");
    int x;
    scanf("%d",&x);

    if(x==-1){
        return 0;
    }
    newnode->data=x;
    printf("enter left child of %d",x);
    newnode->left=create();
    printf("enter right child of %d",x);
    newnode->right=create();

    return newnode;
    
}

// display using inorder traversal

void inorder(struct node *root)
{
    if(root==NULL){
        return 0;
    }
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}

int height(struct node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    int lheight=height(root->left);
    int rheight=height(root->right);

    if(lheight>rheight){
        return (lheight+1);
    }
    else{
        return (rheight+1);
    }
}

int main()
{
    struct node *root =NULL;
    root=create();

    // displaying binary tree by inorder traversal
    printf("\n");

    inorder(root);
    printf("\n");
    int h= height(root);
    printf("%d",h);
    
  return 0;
}