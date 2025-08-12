# Bit manipulation — Exercices C

Mini-projet d’exercices autour des opérations binaires en C (décalages, `&`, `|`, `^`, `~`) et de la représentation des entiers.

## 🔧 Prérequis

- **OS** : Ubuntu 20.04+ (ou équivalent)
- **Compilateur** : `gcc` (standard **C90 / gnu89**)
- **Flags** : `-Wall -Wextra -Werror -pedantic -std=gnu89`

## 🧱 Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o bits
./bits

bit_manipulation/
├── 0-binary_to_uint.c
├── 1-print_binary.c
├── 2-get_bit.c
├── 3-set_bit.c
├── 4-clear_bit.c
├── 5-flip_bits.c
├── 100-get_endianness.c
├── main.h
└── _putchar.c
| Fichier                | Prototype                                                           | Rôle                                                                          | Paramètres                               | Retour                                                  |
| ---------------------- | ------------------------------------------------------------------- | ----------------------------------------------------------------------------- | ---------------------------------------- | ------------------------------------------------------- |
| `0-binary_to_uint.c`   | `unsigned int binary_to_uint(const char *b);`                       | Convertit une chaîne binaire en `unsigned int`.                               | `b` : chaîne composée de `'0'` et `'1'`. | Valeur convertie, ou `0` si `b` est `NULL` ou invalide. |
| `1-print_binary.c`     | `void print_binary(unsigned long int n);`                           | Affiche la représentation binaire de `n` sans tableaux, `malloc`, `%` ou `/`. | `n` : entier non signé.                  | Aucun (`void`). Affiche sur la sortie standard.         |
| `2-get_bit.c`          | `int get_bit(unsigned long int n, unsigned int index);`             | Lit le bit à la position `index`.                                             | `index` : 0 = bit de poids faible.       | `0` ou `1`, `-1` si `index` invalide.                   |
| `3-set_bit.c`          | `int set_bit(unsigned long int *n, unsigned int index);`            | Met à `1` le bit à `index`.                                                   | `n` : pointeur vers la valeur.           | `1` en cas de succès, `-1` si `index` invalide.         |
| `4-clear_bit.c`        | `int clear_bit(unsigned long int *n, unsigned int index);`          | Met à `0` le bit à `index`.                                                   | `n` : pointeur vers la valeur.           | `1` en cas de succès, `-1` si `index` invalide.         |
| `5-flip_bits.c`        | `unsigned int flip_bits(unsigned long int n, unsigned long int m);` | Compte le nombre de bits différents entre `n` et `m`.                         | `n`, `m` : valeurs à comparer.           | Nombre de bits à modifier.                              |
| `100-get_endianness.c` | `int get_endianness(void);`                                         | Détermine l’endianness de la machine.                                         | Aucun.                                   | `1` si little-endian, `0` si big-endian.                |
| `main.h`               | —                                                                   | Contient les prototypes et les inclusions nécessaires.                        | —                                        | —                                                       |
| `_putchar.c`           | `int _putchar(char c);`                                             | Écrit un caractère sur la sortie standard.                                    | `c` : caractère.                         | Retourne le caractère écrit.                            |
