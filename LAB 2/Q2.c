#include<stdio.h>
int main()
{
    int i,n,a[50];
    printf("Enter how many values you want:-");
    scanf("%d",&n);
    printf("enter value of array:-\n");
    for(i=0;i<n;i++)
    {
        printf("Elements %d:- ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Elements of array are:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nArray in reverse order are:-");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}