/*check sparse matrix*/
#include<stdio.h>
int main()
{
    int i,j,rows,col,n,a[10][10],count=0;
    printf("Enter the rows :- ");
    scanf("%d",&rows);
    printf("enter the columns :- ");
    scanf("%d",&col);
    printf("Enter the elements of matrix :-\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("elements of matrix are :- \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>(rows*col)/2)
    {
        printf("It is sparse matrix\n");
    }
    else{
        printf("It is not a sparse matrix\n");
    }
    
    
}