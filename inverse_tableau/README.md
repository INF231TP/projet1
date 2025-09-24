# inverse-tableau
programme c qui inverse un tableau

Projet d'Inversion de Tableau en C
Ce projet est un programme simple en langage C qui permet d'inverser l'ordre des éléments d'un tableau d'entiers. Il est conçu pour être à la fois didactique et fonctionnel.

##Fonctionnalités principales
Saisie utilisateur : L'utilisateur est invité à entrer la taille du tableau, puis les valeurs de chaque élément.

Affichage du tableau original : Le programme affiche le tableau dans son ordre initial, avant toute modification.

Inversion efficace : Une fonction dédiée inverse le tableau en échangeant les éléments du début et de la fin, se déplaçant progressivement vers le centre.

#Affichage du tableau inversé : Une fois l'opération terminée, le programme affiche le tableau dans son nouvel ordre inversé.

Structure du code
Le code est organisé en trois fonctions principales pour une meilleure clarté :

afficher_tableau(int tableau[], int taille) :

Cette fonction utilitaire parcourt le tableau et affiche chaque élément. Elle est utilisée pour montrer l'état du tableau avant et après l'inversion.

inverser_tableau(int tableau[], int taille) :

C'est le cœur du programme. Elle utilise une boucle while pour échanger les éléments. Deux pointeurs, debut (début) et fin (fin), se déplacent l'un vers l'autre jusqu'à ce qu'ils se rencontrent au milieu du tableau, garantissant que tous les éléments sont inversés.

main() :

La fonction principale gère l'interaction avec l'utilisateur, la création du tableau, l'appel aux fonctions d'affichage et d'inversion, et le contrôle du flux du programme.

Comment compiler et exécuter
Pour utiliser ce programme, suivez ces instructions :

Sauvegardez le code source dans un fichier nommé inversetab.c.

Ouvrez votre terminal et compilez le fichier à l'aide d'un compilateur C comme gcc :

gcc inversetab.c -o inverser

Exécutez le programme compilé :

./inverser

Vous serez ensuite invité à fournir la taille et les éléments de votre tableau pour voir le résultat.
