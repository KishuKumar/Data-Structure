/*distance between two elements*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x, y, td, d, i, j;
    printf("Enter how many elements you want: ");
    scanf("%d", &n);
    int *p = (int *)malloc(n*sizeof(int));
    printf("Enter elements of array:");
    for (i = 0; i < n; i++)
    {
        printf("Elements %d :- ",i+1);
        scanf("%d", p+i);
    }
    printf("Enter the range1 : ");
    scanf("%d", &x);
    printf("Enter the range2 : ");
    scanf("%d", &y);
    d = n - 1;
    for (i = 0; i < n; i++)
    {
        if (*(p+i) == x)
        {
            for (j = 0; j < n; j++)
            {
                if (*(p+j) == y)
                {
                    td = abs(i - j);
                    if (td < d)
                        d = td;
                }
            }
        }
    }
    printf("Minimum distance between %d and %d is %d", x, y, d);
    free(p);
    return 0;
}