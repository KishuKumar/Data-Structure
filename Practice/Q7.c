/*prime number*/
#include<stdio.h>
int primeno(int n);
int main()
{
    int n,result;
    printf("enter the how many series you want :-");
    scanf("%d",&n);
    result=primeno(n);
    if(result==1)
    {
        printf("Given number %d is prime number ",n);
    }
    else{
        printf("Given number %d is not a prime number",n);
    }
}
int primeno(int a)
{
    int test=1;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            test=0;
        }
    }
    return test;
}