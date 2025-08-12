# 📂 0x17. C — Doubly Linked Lists

Ce projet implémente une **liste doublement chaînée** (`dlistint_t`) en C et les opérations classiques de parcours, ajout, insertion, suppression, somme, etc.

---

## 🗂️ Contenu du répertoire

- `lists.h` — En-tête du projet (structure `dlistint_t` + prototypes).
- `0-print_dlistint.c` — Affiche tous les éléments d’une liste.
- `1-dlistint_len.c` — Renvoie le nombre d’éléments.
- `2-add_dnodeint.c` — Ajoute un nœud **en tête**.
- `3-add_dnodeint_end.c` — Ajoute un nœud **en fin**.
- `4-free_dlistint.c` — Libère toute la liste.
- `5-get_dnodeint.c` — Renvoie le nœud à un index donné.
- `6-sum_dlistint.c` — Somme des valeurs de la liste.
- `7-insert_dnodeint.c` — Insère à un index donné.
- `8-delete_dnodeint.c` — Supprime le nœud à un index donné.

> Des fichiers `*_main.c` de test peuvent exister localement mais ne sont pas requis par les correcteurs automatiques.

---

## 🧱 `lists.h`

```c
#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - nœud d’une liste doublement chaînée
 * @n: entier stocké
 * @prev: pointeur vers le nœud précédent
 * @next: pointeur vers le nœud suivant
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Prototypes */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */
