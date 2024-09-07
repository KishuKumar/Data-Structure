#include<stdio.h>
int stack[100],choice,x,i,top,n;
void push(void);
void pop(void);
void check(void);
void display(void);
int main()
{
    int  top=-1;
    printf("Enter the size of stack :-");
    scanf("%d",&n);
    printf("Stack operation using array:-");
    printf("Select your choice :-");
    printf("\nPUSH\nPOP\nCHECK\nDISPLAY\nEXIT\n");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                check();
                break;
            }
            case 5:
            {
                printf("\nExiting...");
                break;
            }
            default:
            {
                printf ("\n Please Enter a Valid Choice(1/2/3/4)");
            }
                 
        }
    }while(choice!=5);
    
    return 0;
    
}
void push()
{
    if(top>=n-1)
    {
        printf("\nSTACK is over flow");
         
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n Stack is under flow");
    }
    else
    {
        printf("\nThe popped elements is %d",stack[top]);
        top--;
    }
}
void check()
{
    if(top==-1)
    {
        printf("Stack is empty\n");

    }
    else{
        printf("Stack is not empty\n");
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Enter Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}