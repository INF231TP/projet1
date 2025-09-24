#include <stdio.h>

void produit_vectoriel(double v1[3], double v2[3], double resultat[3]) {
    resultat[0] = v1[1] * v2[2] - v1[2] * v2[1];
    resultat[1] = v1[2] * v2[0] - v1[0] * v2[2];
    resultat[2] = v1[0] * v2[1] - v1[1] * v2[0];
}

int main() {
    double v1[] = {1.0, 2.0, 3.0};
    double v2[] = {4.0, 5.0, 6.0};
    double resultat[3];

    produit_vectoriel(v1, v2, resultat);

    printf("Produit vectoriel de V1 et V2 est: (%f, %f, %f)\n", resultat[0], resultat[1], resultat[2]);

    return 0;
}
