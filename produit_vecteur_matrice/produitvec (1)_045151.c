#include <stdio.h>
#include <stdlib.h>

void produit_vecteur_matrice(int taille_vec, int lignes_mat, int colonnes_mat, int vecteur[taille_vec], int matrice[lignes_mat][colonnes_mat], int resultat[colonnes_mat]) {
    for (int j = 0; j < colonnes_mat; j++) {
        resultat[j] = 0;
        for (int i = 0; i < taille_vec; i++) {
            resultat[j] += vecteur[i] * matrice[i][j];
        }
    }
}

int main() {
    int vecteur[] = {1, 2, 3};
    int matrice[3][2] = {{1, 4}, {2, 5}, {3, 6}};
    int resultat[2];

    produit_vecteur_matrice(3, 3, 2, vecteur, matrice, resultat);

    printf("Produit vecteur x matrice est: (%d, %d)\n", resultat[0], resultat[1]);

    return 0;
}
