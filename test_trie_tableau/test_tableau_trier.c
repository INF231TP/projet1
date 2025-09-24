#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau[100];
    int n, i, j, temp;

    printf("Entrez le nombre d'elements dans le tableau (max 100): ");
    scanf("%d", &n);

    if (n > 100 || n <= 0)
    {
        printf("Taille invalide.\n");
        return 1;
    }

    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // Vérifier si tableau est deja trier
    int estTrie = 1;
    for (i = 0; i < n - 1; i++)
    {
        if (tableau[i] > tableau[i + 1])
        {
            estTrie = 0;
            break;
        }
    }
    if (estTrie)
        printf("Le tableau est déjà trier.\n");
    else
        printf("Le tableau n'est pas trier.\n");

    // Si le tableau n'est pas trier, on effectue un tri a bulle
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (tableau[j] > tableau[j + 1])
            {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Afficher tableau trier
    printf("Tableau trier :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
