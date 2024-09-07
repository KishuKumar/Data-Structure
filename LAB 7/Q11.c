#include <stdio.h>

int main()
{
    int a[5], i, item, n;
    printf("enter the size of array:");
    scanf("%d", &n);
    printf("\nEnter numbers : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter number to search:");
    scanf("%d", &item);
    for (i = 0; i <= 5; i++)
        if (item == a[i])

        {
            printf("\nnumber's location: %d", i + 1);

            break;
        }
    if (i > 5)
        printf("\nItem does not exist.");
    return 0;
}