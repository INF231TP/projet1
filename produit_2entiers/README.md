## produit2entier
programe qui fait le produits de 2 entier supperieur a 0
Projet de Calcul du Produit d'un Vecteur par une Matrice en C
Ce projet est un programme en langage C qui calcule le produit d'un vecteur par une matrice. C'est une opération fondamentale en algèbre linéaire avec de nombreuses applications en science, ingénierie et informatique.

Qu'est-ce que le Produit d'un Vecteur par une Matrice ?
Le produit d'un vecteur par une matrice est une opération qui prend un vecteur et une matrice et produit un nouveau vecteur. Pour que le produit soit possible, le nombre de colonnes du vecteur doit être égal au nombre de lignes de la matrice. Le vecteur résultant aura le même nombre de lignes que la matrice.

Fonctionnalités du programme
Calcul précis : Le programme réalise le produit d'un vecteur et d'une matrice.

Fonction dédiée : Une fonction produit_vecteur_matrice est créée pour encapsuler la logique de calcul.

Affichage clair : Le résultat est affiché de manière lisible.

Structure du code
Le code se compose de deux parties principales :

produit_vecteur_matrice(int taille_vec, int lignes_mat, int colonnes_mat, int vecteur[taille_vec], int matrice[lignes_mat][colonnes_mat], int resultat[colonnes_mat]) :

Cette fonction prend un vecteur, une matrice, leurs tailles respectives et un tableau pour stocker le résultat.

Elle utilise des boucles imbriquées pour effectuer l'opération de multiplication et d'addition.

main() :

La fonction principale initialise un vecteur et une matrice de démonstration.

Elle déclare un tableau pour le résultat et appelle la fonction produit_vecteur_matrice.

Finalement, elle affiche le vecteur résultant sur la console.

Comment compiler et exécuter
Pour utiliser ce programme, suivez ces étapes :

Enregistrez le code source dans un fichier nommé produitvec.c.

Ouvrez votre terminal et compilez le fichier avec un compilateur C comme gcc :

gcc produitvec.c -o produit_vecteur_matrice

Exécutez le programme compilé :

./produit_vecteur_matrice

Le résultat du produit sera affiché directement dans le terminal.
