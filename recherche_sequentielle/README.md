# recherche-_-s-quentielle
Parcourir un tableau case par case jusqu’à trouver l’élément recherché 
Projet de Recherche Séquentielle en C
Ce projet est un programme simple en langage C qui implémente l'algorithme de recherche séquentielle pour trouver un élément spécifique dans un tableau d'entiers. C'est une méthode de recherche de base, utile pour comprendre les fondements des algorithmes de recherche.

Qu'est-ce que la Recherche Séquentielle ?
La recherche séquentielle, aussi appelée recherche linéaire, est une méthode qui consiste à parcourir un tableau, élément par élément, de manière séquentielle, jusqu'à ce que l'élément recherché soit trouvé ou que le tableau entier ait été parcouru.

Fonctionnalités
Saisie utilisateur : L'utilisateur est invité à entrer la taille du tableau, ses éléments, et enfin la valeur qu'il souhaite rechercher.

Parcours du tableau : Le programme parcourt le tableau du premier au dernier élément.

Résultat précis : Le programme indique si l'élément a été trouvé et, si c'est le cas, affiche son index (sa position) dans le tableau.

Structure du code
Le code est organisé en deux fonctions principales pour une meilleure clarté :

rechercher_element(int tableau[], int taille, int element_recherche) :

Cette fonction prend en entrée le tableau, sa taille et l'élément à rechercher.

Elle parcourt le tableau à l'aide d'une boucle for. Si l'élément est trouvé, elle retourne son index.

Si l'élément n'est pas trouvé après avoir parcouru tout le tableau, elle retourne -1 pour indiquer qu'il n'est pas présent.

main() :

C'est le point d'entrée du programme.

Elle gère la saisie de l'utilisateur pour la taille du tableau, les éléments et l'élément à rechercher.

Elle appelle la fonction rechercher_element et utilise son résultat pour afficher un message à l'utilisateur, précisant si l'élément a été trouvé et à quel index.

Comment compiler et exécuter
Pour utiliser ce programme, suivez ces étapes :

Enregistrez le code source dans un fichier nommé recherche.c.

Ouvrez votre terminal et compilez le fichier avec un compilateur C comme gcc :

gcc recherche.c -o recherche_sequentielle

Exécutez le programme compilé :

./recherche_sequentielle

Vous serez ensuite invité à entrer les informations nécessaires pour tester la recherche.
