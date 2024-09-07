/*display elements betwwen two elements*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*p;
    printf("enter how many elements you want :- ");
    scanf("%d",&n);
    p=(int*)malloc(n * sizeof(int));
    printf("enter the values :-\n");
    for(i=0;i<n;i++)
    {
        printf("Elements %d :- ",i+1);
        scanf("%d",p+i);
    }
    printf("\nElements are :-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
    int r1,r2;
    printf("\nEnter the range1 :- ");
    scanf("%d",&r1);
    printf("enter the range2 :- ");
    scanf("%d",&r2);
    int count=0;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>=r1 && *(p+i)<=r2)
        {
            printf("%d\t",*(p+i));
            count++;
            
        }
        
    }
    printf("%d",count);
    printf("\n");
    free(p);
    
    
}