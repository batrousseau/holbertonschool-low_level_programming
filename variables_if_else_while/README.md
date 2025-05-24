# 📂 0x01. C - Variables, if, else, while

Ce projet introduit les concepts fondamentaux du langage C, tels que les variables, les structures conditionnelles (`if`, `else`) et les boucles (`while`). Il fait partie du cursus de programmation bas niveau à Holberton School.

## 🗂️ Contenu du répertoire

- `0-positive_or_negative.c` : Détermine si un nombre est positif, négatif ou nul.
- `1-last_digit.c` : Affiche le dernier chiffre d'un nombre et indique s'il est supérieur à 5, égal à 0 ou inférieur à 6.
- `2-print_alphabet.c` : Imprime l'alphabet en minuscules.
- `3-print_alphabets.c` : Imprime l'alphabet en minuscules puis en majuscules.
- `4-print_alphabt.c` : Imprime l'alphabet en minuscules, sauf les lettres 'q' et 'e'.
- `5-print_numbers.c` : Imprime tous les chiffres de base 10 à partir de 0.
- `6-print_numberz.c` : Imprime tous les chiffres de base 10 à partir de 0, sans utiliser de variables de type `char`.
- `7-print_tebahpla.c` : Imprime l'alphabet en minuscules en ordre inverse.
- `8-print_base16.c` : Imprime tous les chiffres de base 16 en minuscules.
- `9-print_comb.c` : Imprime toutes les combinaisons possibles de chiffres uniques.
- `10-print_comb2.c` : Imprime les combinaisons de deux chiffres de 00 à 99.
- `100-print_comb3.c` : Imprime toutes les combinaisons de deux chiffres différents.
- `101-print_comb4.c` : Imprime toutes les combinaisons de trois chiffres différents.
- `102-print_comb5.c` : Imprime toutes les combinaisons de deux nombres à deux chiffres.

## 🔧 Détails des fichiers et fonctions

### `0-positive_or_negative.c`

- **Fonction** : `main`
- **Utilité** : Génère un nombre aléatoire et détermine s'il est positif, négatif ou nul.

### `1-last_digit.c`

- **Fonction** : `main`
- **Utilité** : Génère un nombre aléatoire, extrait son dernier chiffre et indique s'il est supérieur à 5, égal à 0 ou inférieur à 6.

### `2-print_alphabet.c`

- **Fonction** : `main`
- **Utilité** : Imprime l'alphabet en minuscules, suivi d'un saut de ligne.

### `3-print_alphabets.c`

- **Fonction** : `main`
- **Utilité** : Imprime l'alphabet en minuscules puis en majuscules, suivi d'un saut de ligne.

### `4-print_alphabt.c`

- **Fonction** : `main`
- **Utilité** : Imprime l'alphabet en minuscules, sauf les lettres 'q' et 'e'.

### `5-print_numbers.c`

- **Fonction** : `main`
- **Utilité** : Imprime tous les chiffres de base 10 à partir de 0.

### `6-print_numberz.c`

- **Fonction** : `main`
- **Utilité** : Imprime tous les chiffres de base 10 à partir de 0, sans utiliser de variables de type `char`.

### `7-print_tebahpla.c`

- **Fonction** : `main`
- **Utilité** : Imprime l'alphabet en minuscules en ordre inverse.

### `8-print_base16.c`

- **Fonction** : `main`
- **Utilité** : Imprime tous les chiffres de base 16 en minuscules.

### `9-print_comb.c`

- **Fonction** : `main`
- **Utilité** : Imprime toutes les combinaisons possibles de chiffres uniques, séparées par une virgule et un espace.

### `10-print_comb2.c`

- **Fonction** : `main`
- **Utilité** : Imprime les combinaisons de deux chiffres de 00 à 99, séparées par une virgule et un espace.

### `100-print_comb3.c`

- **Fonction** : `main`
- **Utilité** : Imprime toutes les combinaisons de deux chiffres différents, dans l'ordre croissant.

### `101-print_comb4.c`

- **Fonction** : `main`
- **Utilité** : Imprime toutes les combinaisons de trois chiffres différents, dans l'ordre croissant.

### `102-print_comb5.c`

- **Fonction** : `main`
- **Utilité** : Imprime toutes les combinaisons de deux nombres à deux chiffres, sans répétition.

## 🧪 Compilation

Pour compiler les fichiers, utilisez la commande suivante :

```bash
gcc -Wall -Wextra -Werror -pedantic <nom_du_fichier>.c -o <nom_de_l'exécutable>
