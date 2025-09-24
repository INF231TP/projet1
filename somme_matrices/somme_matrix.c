#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaration des matrices
    int matrix_A[10][10], matrix_B[10][10], somme[10][10];
    int i, j, rows, cols;
    // entrez les dimensions des deux matrices
    printf("Entrez les dimensions (1-10): ");
    scanf("%d %d", &rows, &cols);

    printf("Entrez les elements de la matrice A:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &matrix_A[i][j]);
        }
    }

    printf("Entrez les elements de la matrice B:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &matrix_B[i][j]);
        }
    }

    // proceder a la somme des matrices A et B
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            somme[i][j] = matrix_A[i][j] + matrix_B[i][j];
        }
    }

    // affichage du resultat
    printf("La somme des matrices A et B est:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", somme[i][j]);
        }
        printf("\n");
    }
    return 0;
}