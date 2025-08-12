# 📂 0x14. C — Bit Manipulation

Ce projet exerce la manipulation de bits en C : conversions binaire→entier, lecture/écriture de bits, comptage de flips et détection de l’endianess.

---

## 🗂️ Contenu du répertoire

- `main.h` — En-tête du projet (prototypes & inclusions).
- `0-binary_to_uint.c` — Conversion d’une chaîne binaire en entier non signé.
- `1-print_binary.c` — Affichage de la représentation binaire d’un entier.
- `2-get_bit.c` — Lecture du bit à un index donné.
- `3-set_bit.c` — Mise à 1 du bit à un index donné.
- `4-clear_bit.c` — Mise à 0 du bit à un index donné.
- `5-flip_bits.c` — Nombre de bits à inverser pour passer d’un entier à un autre.
- `100-get_endianness.c` — Détection de l’endianess de la machine (little/big).

> Selon votre configuration, il peut aussi exister des fichiers `*_main.c` utilisés pour tester localement les fonctions (non requis par les vérifications automatiques).

---

## 🔧 Prototypes & utilité (détails par fichier)

### `main.h`
```c
#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <limits.h>
#include <stdio.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* MAIN_H */
