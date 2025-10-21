# 0x00. C - Hello, World

## Description
Ce projet est une introduction au langage C.  
Il permet d’apprendre les bases : la compilation, la syntaxe, les fichiers d'en-tête, et les fonctions simples.

---

## Fichiers présents

### 0-putchar.c
Ce programme affiche le texte `_putchar` suivi d’un retour à la ligne.  
Il utilise uniquement la fonction `_putchar` pour afficher chaque caractère.

### _putchar.c
Contient la définition de la fonction `_putchar`, qui écrit un caractère à la fois sur la sortie standard avec `write`.

### main.h
Fichier d’en-tête qui contient la déclaration de la fonction `_putchar`.

---

## Compilation
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
