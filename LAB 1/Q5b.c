#include<stdio.h>
int main()
{
    int i,j,n,*p[50][50],a[50][50];
    printf("Enter the values in Array:-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            p[i][j]=&a[i][j];
        }
        
    }
    printf("Display VAlues of array:-\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",*p[i][j]);
        }
        printf("\n");
    }
}