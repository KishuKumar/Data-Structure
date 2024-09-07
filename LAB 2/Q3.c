#include<stdio.h>
int main()
{
    int i,n,a[50],search;
    printf("enter how many number in array you want:- ");
    scanf("%d",&n);
    printf("Enter the elements of array:-\n");
    for(i=0;i<n;i++)
    {
        printf("elements %d :-",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nvalues of array are:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter number you want to search:-");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            printf("\nNumber Found");
            return 0;
        }
    }
    printf("\nNumber Not found");
}