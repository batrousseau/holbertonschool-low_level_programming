# 📂 0x13. C - Singly Linked Lists

Ce projet implémente une liste simplement chaînée (Singly Linked List) en langage C, avec des fonctions de base pour en créer, manipuler et détruire.

---

## 🗂️ Contenu du répertoire

- **`singly_linked_list.h`** : fichier d’en‑tête avec la définition de la structure `listint_t` et les prototypes de fonctions.
- **`0-print_listint.c`** : affiche tous les éléments d’une liste.
- **`1-listint_len.c`** : renvoie le nombre d’éléments d’une liste.
- **`2-add_nodeint.c`** : ajoute un nouveau nœud au début de la liste.
- **`3-add_nodeint_end.c`** : ajoute un nouveau nœud à la fin de la liste.
- **`4-free_listint.c`** : libère tous les nœuds d’une liste.
- **`5-free_listint2.c`** : libère tous les nœuds et met le pointeur de tête à `NULL`.
- **`6-pop_listint.c`** : supprime et renvoie la valeur du premier nœud.
- **`7-get_nodeint.c`** : renvoie le pointeur vers le nᵢᵉ nœud dans la liste.
- **`8-sum_listint.c`** : calcule la somme de toutes les valeurs des nœuds.
- **`9-insert_nodeint.c`** : insère un nouveau nœud à une position donnée.
- **`10-delete_nodeint.c`** : supprime un nœud à une position donnée.
- **`100-reverse_listint.c`** : inverse une liste.
- **`101-print_listint_safe.c`** : affiche une liste même si elle contient une boucle.
- **`102-free_listint_safe.c`** : libère une liste contenant potentiellement une boucle.
- **`103-find_loop.c`** : détecte la présence d’une boucle dans une liste.

---

## 🔧 Détails des fichiers et fonctions

### `singly_linked_list.h`

- **Structure** :  
  ```c
  typedef struct listint_s {
      int n;
      struct listint_s *next;
  } listint_t;
