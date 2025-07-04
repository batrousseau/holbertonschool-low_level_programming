# 📂 0x0E. C - Function Pointers

Ce projet explore l'utilisation des pointeurs de fonctions en langage C, à travers la construction d’un mini-calculateur. Il fait partie du programme de programmation bas niveau à Holberton School.

---

## 🗂️ Contenu du répertoire

- `3-calc.h` : Fichier d’en-tête contenant la structure `op_t` et les prototypes des fonctions.
- `3-op_functions.c` : Fonctions arithmétiques de base (`+`, `-`, `*`, `/`, `%`).
- `3-get_op_func.c` : Sélectionne dynamiquement la bonne fonction selon l’opérateur.
- `3-main.c` : Programme principal qui interprète les arguments et utilise les pointeurs de fonction.

---

## 🔧 Détails des fichiers et fonctions

### `3-calc.h`

Contient la structure `op_t` et les prototypes suivants :

```c
#ifndef CALC_H
#define CALC_H

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
