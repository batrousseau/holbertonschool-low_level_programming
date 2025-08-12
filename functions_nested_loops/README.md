# 📂 0x02. C — Functions, Nested Loops

Ce dossier couvre les **fonctions**, les **boucles imbriquées** et les premières petites libs (en-tête, `_putchar`). On y trouve des exercices d’impression, de tests de caractères, d’arithmétique simple et de suites (Fibonacci).

---

## 🗂️ Contenu du répertoire

- `main.h` — En-tête du projet : **prototypes** de toutes les fonctions.
- `0-putchar.c` — Programme qui affiche `_putchar` puis un retour à la ligne.
- `1-alphabet.c` — Imprime l’alphabet en minuscules.
- `2-print_alphabet_x10.c` — Imprime 10 fois l’alphabet en minuscules.
- `3-islower.c` — Teste si un caractère est une minuscule.
- `4-isalpha.c` — Teste si un caractère est alphabétique.
- `5-sign.c` — Affiche le signe d’un entier et renvoie `1`, `0` ou `-1`.
- `6-abs.c` — Valeur absolue d’un entier.
- `7-print_last_digit.c` — Affiche et renvoie le dernier chiffre d’un entier.
- `8-24_hours.c` — Affiche toutes les minutes de 00:00 à 23:59.
- `9-times_table.c` — Affiche la table de 9.
- `10-add.c` — Addition de deux entiers.
- `11-print_to_98.c` — Affiche tous les entiers de `n` jusqu’à `98`.
- `100-times_table.c` — Affiche la table de multiplication de `n` (0 ≤ n ≤ 15).
- `101-natural.c` — Somme des multiples de 3 ou 5 strictement inférieurs à 1024.
- `102-fibonacci.c` — Affiche les 50 premiers nombres de Fibonacci (démarre à 1, 2).
- `103-fibonacci.c` — Somme des termes **pairs** de Fibonacci ≤ 4 000 000.
- `104-fibonacci.c` — Affiche les **98** premiers Fibonacci (gestion grands nombres).
- `_putchar.c` — Wrapper d’écriture d’un caractère sur la sortie standard (si présent localement).

> Certains fichiers `*_main.c` peuvent exister pour vos tests locaux ; ils ne sont pas requis par les correcteurs automatiques.

---

## 🧱 `main.h` — Prototypes

```c
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

void print_alphabet(void);
void print_alphabet_x10(void);

int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int n);
int print_last_digit(int n);

void jack_bauer(void);
void times_table(void);
int add(int a, int b);
void print_to_98(int n);
void print_times_table(int n); /* pour 100-times_table.c */

#endif /* MAIN_H */
