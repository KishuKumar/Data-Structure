#include <stdio.h>

void print(int a[][3], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}
int main()
{
    int m, n, size = 0, k = 1;
    printf("Enter order of matrix :\n");
    scanf("%d%d", &m, &n);
    int ar[m][n];
    printf("Enter elements :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
            if (ar[i][j] != 0)
                size++;
        }
    }
    printf("\n");
    int sparse[size + 1][3];
    sparse[0][0] = m;
    sparse[0][1] = n;
    sparse[0][2] = size;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = ar[i][j];
                k++;
            }
        }
    }
    printf("The original matrix :\n");
    print(sparse, size + 1, 3);
    int sparsetrans[size + 1][3];
    for (int i = 0; i < size + 1; i++)
    {
        sparsetrans[i][0] = sparse[i][1];
        sparsetrans[i][1] = sparse[i][0];
        sparsetrans[i][2] = sparse[i][2];
    }
    int t = 0;
    for (int i = 1; i < size + 1; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if (sparsetrans[j][0] > sparsetrans[j + 1][0])
            {
                t = sparsetrans[j + 1][0];
                sparsetrans[j + 1][0] = sparsetrans[j][0];
                sparsetrans[j][0] = t;
                t = sparsetrans[j + 1][1];
                sparsetrans[j + 1][1] = sparsetrans[j][1];
                sparsetrans[j][1] = t;
                t = sparsetrans[j + 1][2];
                sparsetrans[j + 1][2] = sparsetrans[j][2];
                sparsetrans[j][2] = t;
            }
        }
    }
    printf("\n\nThe transpose of the original matrix :\n");
    print(sparsetrans, size + 1, 3);
    return 0;
}