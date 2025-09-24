#include <stdio.h>

int recherche_sequentielle(int tableau[], int taille, int cible) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == cible) {
            return i;
        }
    }
    return -1;
}

int main() {
    int nombres[] = {5, 2, 8, 1, 9, 4, 6};
    int taille = sizeof(nombres) / sizeof(nombres[0]);
    int cible = 9;
    int resultat = recherche_sequentielle(nombres, taille, cible);

    if (resultat != -1) {
        printf("Element %d trouve a l'index %d.\n", cible, resultat);
    } else {
        printf("Element %d non trouve.\n", cible);
    }

    return 0;
}
