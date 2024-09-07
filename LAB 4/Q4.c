#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int flag = 0;
    int matrix[n][n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    }

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (matrix[i][j] != 0)
                flag = 0;
            else
                flag = 1;
        }
    }

    if (flag == 1)
        printf("It is upper Triangular Matrix\n");
    else
        printf("It is not an upper Triangular Matrix\n");

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (matrix[i][j] != 0)
                flag = 0;
            else
                flag = 1;

    if (flag == 1)
        printf("It is lower Triangular Matrix\n");
    else
        printf("It is not an Lower Triangular Matrix\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i == j - 1 || j == i - 1)
            {
                if (matrix[i][j] == 0)
                {
                    flag = 1;
                    break;
                }
                else
                    flag = 0;
            }
        }
    }
    if (flag == 1)
        printf("Tridiagonal matrix\n");
    else
        printf("Not tridiagonal matrix\n");

    return 0;
}