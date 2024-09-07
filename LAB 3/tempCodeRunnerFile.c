#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*a;
    printf("enter how many elements you wants :- ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("enter the values of array :-\n");
    for(i=0;i<n;i++)
    {
        printf("Elements %d :- ",i+1);
        scanf("%d",(a+i));
    }
    printf("Values of array are :- \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }
    int temp;
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(*(a+i)%2==1) 
          {
            temp=*(a+i);
            *(a+i)=*(a+j);
            *(a+j)=temp;
          } 
        }
    }
    printf("\n");
    printf("Even numbers followed by odd number are :- \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }
}