/*reverse a number*/
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
    printf("Array in Reverse order :- \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",*(p+i));
    }
}