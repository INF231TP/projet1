# median_tableau
programme c qui calcul le median d'un tableau
Projet de Calcul de la Médiane en C
Ce projet est un programme simple écrit en langage C qui permet de calculer la médiane d'un tableau d'entiers fourni par l'utilisateur. Il est conçu pour être facile à comprendre et à utiliser.

 # #Fonctionnalités
Saisie utilisateur : Le programme demande à l'utilisateur d'entrer la taille du tableau, puis de saisir chaque élément individuellement.

Tri du tableau : Avant de calculer la médiane, le programme trie le tableau pour s'assurer que les éléments sont dans l'ordre croissant.

Calcul précis : La fonction de calcul de la médiane gère deux cas distincts pour une précision optimale :

Si le nombre d'éléments est impair, elle retourne l'élément central du tableau.

Si le nombre d'éléments est pair, elle calcule la moyenne des deux éléments centraux.

Affichage du résultat : La médiane est affichée avec une précision de deux décimales.

Structure du code
Le code est structuré en plusieurs fonctions pour une meilleure lisibilité et modularité :

trier_tableau(int tableau[], int taille) :

Cette fonction implémente l'algorithme de tri à bulles pour trier le tableau d'entiers.

trouver_median(int tableau[], int taille) :

Cette fonction appelle trier_tableau pour trier le tableau, puis détermine et retourne la médiane.

main() :

C'est le point d'entrée du programme. Elle gère la saisie utilisateur, l'appel à la fonction trouver_median et l'affichage du résultat.

Comment compiler et exécuter
Pour compiler et exécuter ce programme, suivez ces étapes :

Enregistrez le code source dans un fichier nommé median.c.

Ouvrez votre terminal et utilisez un compilateur C tel que gcc pour compiler le fichier :

gcc median.c -o median

Exécutez le programme compilé en tapant :

./median

Le programme vous guidera pour entrer les valeurs de votre tableau.
