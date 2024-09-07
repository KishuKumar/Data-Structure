#include<stdio.h>
int main()
{
    int i,n,*p[50],a[50];
    printf("enter the how many array you wany:-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        
        scanf("%d",&a[i]);
        p[i]=&a[i];
    }
    printf("Elements of array are:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*p[i]);
    }

}