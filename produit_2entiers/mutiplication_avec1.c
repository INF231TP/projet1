#include <stdio.h>

int multiplier_avec_plus_un(int a, int b) {
    if (a < 0 || b < 0) {
        printf("Erreur: Les nombres doivent etre positifs.\n");
        return -1;
    }

    int resultat = 0;
    for (int i = 0; i < b; i++) {
        resultat += a;
    }
    return resultat;
}

int main() {
    int a ;
    int b ;
    printf("entrez les nombre \n");
    scanf("%d",&a);
     scanf("%d",&a);
    if(a<1||b<1){
        printf("mutiplication invalide");
        return 0;
    }
    int produit = multiplier_avec_plus_un(a, b);

    if ( produit != -1 ) {
        printf("%d x %d = %d\n", a, b, produit);
    }

    return 0;
}
