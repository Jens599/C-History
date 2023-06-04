#include <stdio.h>
void input(int mat[][3]);

int main()
{
    int matA[3][3], matB[3][3], matC[3][3];
    printf("Enter matrix A:\n");
    input(matA);
    printf("Enter matrix B:\n");
    input(matB);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matC[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
        printf("\n");
    }
}

void input(int mat[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element  %d,%d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}