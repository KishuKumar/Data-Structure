#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorder(struct node *root)
{
    if(root!=NULL){
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    struct node *p=createnode(2);
    struct node *p1=createnode(3);
    struct node *p2=createnode(4);
    struct node *p3=createnode(5);
    struct node *p4=createnode(6);
    struct node *p5=createnode(7);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=NULL;
    preorder(p);




}