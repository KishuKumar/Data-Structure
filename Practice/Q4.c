/*reverse a number using function*/
#include<stdio.h>
void reverse(int n);
int main()
{
    int n;
    printf("Enter the number :- ");
    scanf("%d",&n);
    reverse(n);
}
void reverse(int x)
{
    int p,q,r,s;
    p=x/100;
    q=x%100;
    r=q/10;
    s=q%10;
    printf("Reverse no is %d%d%d",s,r,p);
}
