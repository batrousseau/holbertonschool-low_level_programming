# 📂 0x10. C - Variadic Functions

Ce projet explore l'utilisation des fonctions variadiques en langage C, permettant de gérer un nombre variable d'arguments. Il fait partie du cursus de programmation bas niveau à Holberton School.

## 🗂️ Contenu du répertoire

- `variadic_functions.h` : Fichier d'en-tête contenant les prototypes des fonctions et les inclusions nécessaires.
- `0-sum_them_all.c` : Fonction qui retourne la somme de tous ses paramètres.
- `1-print_numbers.c` : Fonction qui imprime des nombres, suivis d'un saut de ligne.
- `2-print_strings.c` : Fonction qui imprime des chaînes de caractères, suivies d'un saut de ligne.
- `3-print_all.c` : Fonction qui imprime tout type de données selon un format spécifié.

## 🔧 Détails des fichiers et fonctions

### `variadic_functions.h`

Contient les prototypes des fonctions :
- `int sum_them_all(const unsigned int n, ...);`
- `void print_numbers(const char *separator, const unsigned int n, ...);`
- `void print_strings(const char *separator, const unsigned int n, ...);`
- `void print_all(const char * const format, ...);`

Inclut les bibliothèques nécessaires :
- `stdarg.h` pour la gestion des arguments variadiques
- `stdio.h` pour les fonctions d'entrée/sortie
- `stdlib.h` pour les fonctions utilitaires

---

### `0-sum_them_all.c`

- **Fonction** : `sum_them_all`
- **Prototype** : `int sum_them_all(const unsigned int n, ...);`
- **Utilité** : Calcule la somme de tous les arguments passés à la fonction.
- **Description** : Utilise `va_list` pour accéder aux arguments variadiques et les additionner.

---

### `1-print_numbers.c`

- **Fonction** : `print_numbers`
- **Prototype** : `void print_numbers(const char *separator, const unsigned int n, ...);`
- **Utilité** : Imprime une liste de nombres entiers, séparés par un séparateur spécifié.
- **Description** : Parcourt les arguments variadiques et les imprime en utilisant le séparateur fourni.

---

### `2-print_strings.c`

- **Fonction** : `print_strings`
- **Prototype** : `void print_strings(const char *separator, const unsigned int n, ...);`
- **Utilité** : Imprime une liste de chaînes de caractères, séparées par un séparateur spécifié.
- **Description** : Parcourt les arguments variadiques et les imprime. Si une chaîne est `NULL`, imprime `(nil)` à la place.

---

### `3-print_all.c`

- **Fonction** : `print_all`
- **Prototype** : `void print_all(const char * const format, ...);`
- **Utilité** : Imprime des arguments de différents types selon un format spécifié.
- **Description** : Analyse la chaîne de format pour déterminer les types des arguments et les imprime en conséquence. Gère les types `char`, `int`, `float` et `char *`.

---

## 🧪 Compilation

Pour compiler les fichiers, utilisez la commande suivante :

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o output
