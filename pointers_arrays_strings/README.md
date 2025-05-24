# 📂 0x05. C - Pointers, Arrays and Strings

Ce projet approfondit la compréhension des pointeurs, des tableaux et des chaînes de caractères en langage C. Il fait partie du cursus de programmation bas niveau à Holberton School.

## 🗂️ Contenu du répertoire

- `0-reset_to_98.c` : Met la valeur pointée par un pointeur à 98.
- `1-swap.c` : Échange les valeurs de deux entiers.
- `2-strlen.c` : Calcule la longueur d'une chaîne de caractères.
- `3-puts.c` : Affiche une chaîne de caractères suivie d'un saut de ligne.
- `4-print_rev.c` : Affiche une chaîne de caractères en ordre inverse.
- `5-rev_string.c` : Inverse une chaîne de caractères.
- `6-puts2.c` : Affiche un caractère sur deux d'une chaîne de caractères.
- `7-puts_half.c` : Affiche la seconde moitié d'une chaîne de caractères.
- `8-print_array.c` : Affiche les éléments d'un tableau d'entiers.
- `9-strcpy.c` : Copie une chaîne de caractères dans une autre.
- `100-atoi.c` : Convertit une chaîne de caractères en entier.
- `101-keygen.c` : Génère un mot de passe aléatoire.

## 🔧 Détails des fichiers et fonctions

### `0-reset_to_98.c`

- **Fonction** : `void reset_to_98(int *n);`
- **Utilité** : Modifie la valeur de l'entier pointé par `n` pour qu'elle soit égale à 98.

### `1-swap.c`

- **Fonction** : `void swap_int(int *a, int *b);`
- **Utilité** : Échange les valeurs des entiers pointés par `a` et `b`.

### `2-strlen.c`

- **Fonction** : `int _strlen(char *s);`
- **Utilité** : Retourne la longueur de la chaîne de caractères `s`.

### `3-puts.c`

- **Fonction** : `void _puts(char *str);`
- **Utilité** : Affiche la chaîne de caractères `str` suivie d'un saut de ligne.

### `4-print_rev.c`

- **Fonction** : `void print_rev(char *s);`
- **Utilité** : Affiche la chaîne de caractères `s` en ordre inverse.

### `5-rev_string.c`

- **Fonction** : `void rev_string(char *s);`
- **Utilité** : Inverse la chaîne de caractères `s`.

### `6-puts2.c`

- **Fonction** : `void puts2(char *str);`
- **Utilité** : Affiche un caractère sur deux de la chaîne `str`, en commençant par le premier.

### `7-puts_half.c`

- **Fonction** : `void puts_half(char *str);`
- **Utilité** : Affiche la seconde moitié de la chaîne `str`.

### `8-print_array.c`

- **Fonction** : `void print_array(int *a, int n);`
- **Utilité** : Affiche les `n` premiers éléments du tableau `a`.

### `9-strcpy.c`

- **Fonction** : `char *_strcpy(char *dest, char *src);`
- **Utilité** : Copie la chaîne `src` dans `dest` et retourne `dest`.

### `100-atoi.c`

- **Fonction** : `int _atoi(char *s);`
- **Utilité** : Convertit la chaîne `s` en entier.



## 🧪 Compilation

Pour compiler les fichiers, utilisez la commande suivante :

```bash
gcc -Wall -Wextra -Werror -pedantic <nom_du_fichier>.c -o <nom_de_l'exécutable>
