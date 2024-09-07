/*NGE*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, element;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int nge = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                nge = arr[j];
                break;
            }
        }
        printf("%d -- %d\n", arr[i], nge);
    }
    free(arr);
    return 0;
}