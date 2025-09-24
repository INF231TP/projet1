# Produitsvex
Produits des vecteurs 
Projet de Calcul du Produit Vectoriel en C
Ce projet est un programme simple et efficace écrit en langage C. Il a pour but de calculer le produit vectoriel de deux vecteurs tridimensionnels prédéfinis.

Qu'est-ce que le Produit Vectoriel ?
Le produit vectoriel, également appelé produit en croix, est une opération binaire sur deux vecteurs dans un espace euclidien à trois dimensions. Le résultat est un nouveau vecteur qui est perpendiculaire aux deux vecteurs d'origine.
Il est couramment utilisé en physique et en ingénierie, par exemple, pour calculer le moment d'une force ou le champ magnétique.

Fonctionnalités du programme
Calcul spécifique : Le programme se concentre sur le calcul du produit vectoriel pour deux vecteurs tridimensionnels.

Fonction dédiée : Une fonction produit_vectoriel est créée pour encapsuler la logique de calcul, ce qui rend le code propre et facile à lire.

Affichage clair : Le résultat est affiché de manière lisible, montrant les trois composantes du vecteur résultant.

Structure du code
Le code se compose de deux parties principales :

produit_vectoriel(double v1[3], double v2[3], double resultat[3]) :

Cette fonction prend deux vecteurs en entrée (v1 et v2) et un tableau pour stocker le résultat.

Elle applique la formule mathématique du produit vectoriel pour calculer les trois composantes du vecteur résultant.

main() :

La fonction principale initialise les deux vecteurs de démonstration (v1 et v2).

Elle déclare un tableau pour le résultat et appelle la fonction produit_vectoriel.

Finalement, elle affiche le vecteur résultant sur la console.

Comment compiler et exécuter
Pour utiliser ce programme, suivez ces étapes :

Enregistrez le code source dans un fichier nommé produitvec.c.

Ouvrez votre terminal et compilez le fichier avec un compilateur C comme gcc :

gcc produitvec.c -o produit_vectoriel

Exécutez le programme compilé :

./produit_vectoriel

Le résultat du produit vectoriel sera affiché directement dans le terminal.
