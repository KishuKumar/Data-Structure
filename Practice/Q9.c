#include<stdio.h>
void fibonacci(int n);
int main()
{
    int n;
    printf("enter the how many series you want :- ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;

}
void fibonacci(int a)
{
    int n1=0,n2=1,n3,i;
    printf("\nFibonacci series are :- \n");
    printf("%d %d",n1,n2);
    for(i=2;i<a;i++)
    {
        n3=n1+n2;
        printf("%d\t",n3);
        n1=n2;
        n2=n3;
    }
    
}