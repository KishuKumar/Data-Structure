#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,a[n],dis,z,r1,r2;
    printf("enter how many arrays you want:-\n");
    scanf("%d",&n);
    printf("Enter the values of array:-\n");
    for(i=0;i<n;i++)
    {
        printf("Elements %d:-",i+1);
        scanf("%d",&a[i]);

    }
    printf("\nValues of array are:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nenter the range 1:-");
    scanf("%d",&r1);
    printf("\nenter the range2:-");
    scanf("%d",&r2);
    dis=n-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==r1)
        {
            for(j=0;j<n;j++)
            {
                if(a[j]==r2)
                {
                    z=abs(i-j);
                    if(z<dis)
                    {
                        z=dis;
                    }
                }
            }

        }
    }
    printf("Distance Between %d and %d is %d",r1,r2,dis);
}