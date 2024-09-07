#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coeff;
    int expo;
    struct node *link;
};
struct node *create(struct node *head)
{
    int i, n;
    int coef, exp;
    printf("Enter how many terms you want :- ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the coefficient for term %d :- ", i + 1);
        scanf("%d", &coef);

        printf("Enter the exponent for term %d:- ", i + 1);
        scanf("%d", &exp);
        head = insert(head, coef, exp);
    }

    return head;
}
struct node *insert(struct node *head, int coef, int exp)
{
    struct node *temp;
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->coeff = coef;
    new->expo = exp;
    new->link = NULL;
    if (head == NULL && exp > head->expo)
    {
        new->link = head;
        head = new;
    }
    else
    {
        temp = head;
        while (temp->link != NULL && temp->link->expo > exp)

        temp = temp->link;
        new->link = temp->link;
        temp->link = new;
    }
    return head;

}
int main()
{
    struct node *head = NULL;
    head = create(head);
}