#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void tranversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Elements : %d\n",ptr->data);
        ptr=ptr->link;
    }
}
//iterative
void count_length(struct node *ptr)
{
    int count=0;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf(" Number of elements are :%d",count);
}
// recursive
int get_length(struct node *ptr)
{
    if(ptr==NULL)
    return 0;
    return 1+get_length(ptr->link);
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *sixth;
    struct node *seventh;
    struct node *eighth;
    struct node *ninth;
    struct node *tenth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    fifth=(struct node *)malloc(sizeof(struct node));
    sixth=(struct node *)malloc(sizeof(struct node));
    seventh=(struct node *)malloc(sizeof(struct node));
    eighth=(struct node *)malloc(sizeof(struct node));
    ninth=(struct node *)malloc(sizeof(struct node));
    tenth=(struct node *)malloc(sizeof(struct node));
    
    head->data=1;
    head->link=second;
    second->data=2;
    second->link=third;
    third->data=3;
    third->link=fourth;
    fourth->data=4;
    fourth->link=fifth;
    fifth->data=5;
    fifth->link=sixth;
    sixth->data=6;
    sixth->link=seventh;
    seventh->data=7;
    seventh->link=eighth;
    eighth->data=8;
    eighth->link=ninth;
    ninth->data=9;
    ninth->link=tenth;
    tenth->data=10;
    tenth->link=NULL;

    tranversal(head);
    count_length(head);
    printf("\nLInked List lenght using recursion %d",get_length(head));


    return 0;
}