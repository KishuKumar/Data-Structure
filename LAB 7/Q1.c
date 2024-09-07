#include <stdio.h>

int linearSearch(int arr[], int size, int ele)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[8], element,a;
    printf("Enter the elements\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the elements to be searched : ");
    scanf("%d", &element);
    a = linearSearch(arr, 8, element);
    if(a==1){
        printf("Element found\n");
    }
    else
    printf("Element not found\n");
    return 0;
}