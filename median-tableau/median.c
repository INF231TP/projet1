#include <stdio.h>
#include <stdlib.h>

void trier_tableau(int tableau[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
}

double trouver_median(int tableau[], int taille) {
    trier_tableau(tableau, taille);

    if (taille % 2 == 1) {
        return (double)tableau[taille / 2];
    } else {
        int milieu1 = tableau[taille / 2 - 1];
        int milieu2 = tableau[taille / 2];
        return (double)(milieu1 + milieu2) / 2.0;
    }
}

int main() {
    
    int taille1;
    printf(" Entrez la taille du taleau  : ");
    scanf("%d",&taille1);
    int tableau1[taille1];

    int i;
    for (i = 0; i <taille1; i++)
    {
        printf("element %d:\n",i);
        scanf("%d ",&tableau1[i]);
    }
    double median1 = trouver_median(tableau1, taille1);
    printf("Le median du tableau est: %.2f\n", median1);


    return 0;
}
