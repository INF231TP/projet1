#include <stdio.h>
#include <stdlib.h>


void afficher_tableau(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf(" %d ", tableau[i]);
    }
    printf(" \n");
}

void inverser_tableau(int tableau[], int taille) {
    int debut = 0;
    int fin = taille - 1;
    while (debut < fin) {
        int temp = tableau[debut];
        tableau[debut] = tableau[fin];
        tableau[fin] = temp;
        debut++;
        fin--;
    }
}

int main() {
     
    int tailletab;
    printf(" Entrez la taille du taleau : ");
    scanf("%d",&tailletab);
    int tableau[tailletab];
    
    int i;
    for (i = 0; i <tailletab; i++)
    {
        printf(" element %d :\n",i);
        scanf(" %d ",&tableau[i]);
    }
    
    printf("Tableau original: ");
    afficher_tableau(tableau, tailletab);

    inverser_tableau(tableau, tailletab);

    printf("Tableau inverse: ");
    afficher_tableau(tableau, tailletab);

    return 0;
}
