# C - More functions, more nested loops

## Description
Ce projet est un ensemble de fonctions en C qui permettent de manipuler des entiers et des chaînes de caractères, en utilisant des pointeurs, des boucles et des conditions.  
L’objectif est de se familiariser avec les fonctions, les pointeurs et les boucles imbriquées en C.

## Fichiers du projet
- `main.h` : contient les prototypes de toutes les fonctions.
- `main.c` : fichier de test pour les fonctions.
- `0-reset_to_98.c` : met à jour la valeur d’un entier à 98.
- `1-swap.c` : échange la valeur de deux entiers.
- `2-strlen.c` : retourne la longueur d’une chaîne de caractères.
- `3-puts.c` : affiche une chaîne de caractères suivie d’un retour à la ligne.
- `4-print_rev.c` : affiche une chaîne de caractères à l’envers.
- `5-rev_string.c` : inverse une chaîne de caractères.
- `6-puts2.c` : affiche un caractère sur deux d’une chaîne.
- `7-puts_half.c` : affiche la moitié d’une chaîne de caractères.
- `8-print_array.c` : affiche les éléments d’un tableau d’entiers.
- `9-strcpy.c` : copie une chaîne de caractères.
- `10-atoi.c` : convertit une chaîne de caractères en entier.

## Compilation et exécution
Pour compiler toutes les fonctions avec le fichier de test `main.c` :
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 0-reset_to_98.c 1-swap.c 2-strlen.c ... -o test_program
./test_program
