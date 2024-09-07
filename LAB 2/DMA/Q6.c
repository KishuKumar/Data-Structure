#include <stdio.h>
#include <stdlib.h>

void NonzeroElement(int **array, int rows, int cols)
{
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if ((*(*(array + i) + j)) != 0)
            {
                count++;
            }
        }
    }
    printf("There are %d Non-zero elements\n", count);
}

void SumofAboveLeading(int **array, int rows, int cols)
{
    int sum =0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i < j)
            {
                sum = sum + *(*(array + i) + j);
            }
        }
    }
    printf("The sum of elements above leading diagonal of a square matrix = %d\n", sum);
}

void elementsBelowMinor(int **array, int rows, int cols)
{
    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            if (j>=(rows-i)&&j<rows)
            {
                printf("%d ",*(*(array + i) + j));
            }
        }
        printf("\n");
    }
}

void productOfDiagonal(int **array, int rows, int cols)
{
    int product =1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                product = product * (*(*(array + i) + j));
            }
        }
    }
    printf("The product of diagonal elements of a square matrix = %d\n", product);
}

int main()
{
    int n;
    printf("Enter the size of square matrix\n");
    scanf("%d", &n);
    int rows = n;
    int cols = n;

    int **array = (int **)malloc(rows * sizeof(int *));

    for (int i = 0; i < rows; i++)
    {
        array[i] = (int *)malloc(cols * sizeof(int));
    }
    printf("Enter Elements for Matrix of Size %d*%d:\n", rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    NonzeroElement(array, rows, cols);
    SumofAboveLeading(array,rows,cols);
    elementsBelowMinor(array,rows,cols);
    productOfDiagonal(array,rows,cols);

    free(array);
    return 0;
}