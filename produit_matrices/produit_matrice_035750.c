#include <stdio.h>
#include <stdlib.h>

void afficher_matrice(int lignes, int colonnes, int matrice[lignes][colonnes]) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%d\t", matrice[i][j]);
        }
        printf("\n");
    }
}

void multiplier_matrices(int lignes_a, int colonnes_a, int matrice_a[lignes_a][colonnes_a], int lignes_b, int colonnes_b, int matrice_b[lignes_b][colonnes_b], int resultat[lignes_a][colonnes_b]) {
    for (int i = 0; i < lignes_a; i++) {
        for (int j = 0; j < colonnes_b; j++) {
            resultat[i][j] = 0;
            for (int k = 0; k < colonnes_a; k++) {
                resultat[i][j] += matrice_a[i][k] * matrice_b[k][j];
            }
        }
    }
}

int main() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int C[2][2];

    multiplier_matrices(2, 3, A, 3, 2, B, C);

    printf("Matrice A:\n");
    afficher_matrice(2, 3, A);

    printf("\nMatrice B:\n");
    afficher_matrice(3, 2, B);

    printf("\nProduit (A * B):\n");
    afficher_matrice(2, 2, C);

    return 0;
}
