/*search a number*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*p;
    printf("Enter how many elements you want :- ");
    scanf("%d",&n);
    p=(int*)malloc(n * sizeof(int));
    printf("Enter the values :-\n");
    for(i=0;i<n;i++)
    {
        printf("Elements %d :- ",i+1);
        scanf("%d",p+i);
    }
    printf("Values are :- \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
    int search;
    printf("\nEnter the elements to search :- ");
    scanf("%d",&search);
    printf("To search elements :- \n");
    for(i=0;i<n;i++)
    {
        if(*(p+i)==search)
        {
            printf("Number %d is found",search);
            return 0;
        }

    }
    printf("Number %d is not found",search);

}
