/*greatest between 3 number*/
#include<stdio.h>
int greater(int a,int b,int c);
int main()
{
    int a,b,c,result;
    printf("enter the first number :- ");
    scanf("%d",&a);
    printf("enter the second number :- ");
    scanf("%d",&b);
    printf("enter the third number :- ");
    scanf("%d",&c);
    result=greater(a,b,c);
    printf("greatest number is %d",result);
    return 0;
    
    
    
    
}
int greater(int x,int y,int z)
{
    if((x>y) && (x>z))
    {
        return x;
    }
    if((y>x) && (y>z))
    {
        return y;
    }
    else
    {
        return z;
    }
    
}