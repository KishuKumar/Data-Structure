/*armstrong number*/
#include<stdio.h>
int armstrong(int n);
int main()
{
    int n,result;
    printf("enter the number :- ");
    scanf("%d",&n);
    result=armstrong(n);
    if(result==n)
    {
        printf("given number %d is armstrong number",n);
    }
    else{
        printf("Given number %d is not armstrong number",n);
    }


}
int armstrong(int a)
{
    int p,q,r,s,t;
    p=a/100;
    q=a%100;
    r=q/10;
    s=q%10;
    t=(p*p*p)+(r*r*r)+(s*s*s);
    return t;

}