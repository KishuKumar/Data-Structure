/*find hcf using recursion*/
#include <stdio.h>
int gcd(int a, int b);
int main()

{

    int a, b, result;
    printf("Enter the first number :- ");
    scanf("%d",&a);
    printf("enter the second number :- ");
    scanf("%d",&b);
    result = gcd(a, b);
    printf("The GCD of %d and %d is %d.\n", a, b, result);
}
int gcd(int x, int y)
{
    while (x != y)
    {
        if (x > y)
        {
            return gcd(x-y, y);
        }
        else    
        {
            return gcd(x, y - x);
        }
    }

    return x;
}