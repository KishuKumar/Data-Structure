#include <stdio.h>
#include <stdlib.h>
void main()
{
    int option;
    do
    {
        printf("\n A Program to represent a Graph by using an\n ");
        printf("Adjacency Matrix method \n ");

        printf("\n 1. Un-Directed Graph ");
        printf("\n 2. Exit ");
        printf("\n\n Select a proper option : ");
        scanf("%d", &option);
        switch (option)
        {

        case 1:
            undir_graph();
            break;
        case 2:
            exit(0);
        }
    } while (1);
}

int undir_graph()
{
    int adj_mat[50][50];
    int deg, i, j, n;
    printf("\n How Many Vertices ? : ");
    scanf("%d", &n);
    read_graph(adj_mat, n);
    printf("\n Vertex \t Degree ");
    for (i = 1; i <= n; i++)
    {
        deg = 0;
        for (j = 1; j <= n; j++)
            if (adj_mat[i][j] == 1)
                deg++;
        printf("\n\n %5d \t\t %d\n\n", i, deg);
    }
    return;
}

int read_graph(int adj_mat[50][50], int n)
{
    int i, j;
    char reply;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j)
            {
                adj_mat[i][j] = 0;
                continue;
            }
            printf("\n Vertices %d & %d are Adjacent ? (Y/N) :", i, j);
            scanf("%c", &reply);
            if (reply == 'y' || reply == 'Y')
                adj_mat[i][j] = 1;
            else
                adj_mat[i][j] = 0;
        }
    }
    return;
}
