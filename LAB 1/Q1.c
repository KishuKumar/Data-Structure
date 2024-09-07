#include<stdio.h>
int main()
{
    int i,n,sum=0,average,max,min,a[50];
    printf("enter the how many no you want:-");
    scanf("%d",&n);
    printf("enter the elements of array:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    average=sum/n;
    printf("Maximun Number in array is :-%d",max);
    printf("\nMinimun Number in array is :-%d",min);
    printf("\nSum of two number is :-%d",sum);
    printf("\nAverage of array is :-%d",average);
}