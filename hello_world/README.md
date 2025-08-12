# ​ 0x00. C — Hello, World

Ce tout premier projet introduit les bases du langage C : la fonction `main`, l’écriture de caractères, et la compilation. Adapté pour une prise en main du langage C dans le cadre du programme Holberton School.

---

## ​​ Contenu minimal (généralement)

- `0-hello.c` ou `0-hello_world.c` — affiche `"Hello, World!"` suivi d’un saut de ligne.
- `_putchar.c` (optionnel) — fonction pour afficher un caractère à la fois (utilisée par certains tests).
- `main.h` ou équivalent (rare) — peut contenir le prototype de `_putchar` si utilisé.

Certains environnements référencent également un fichier de test `main.c` pour valider la bonne exécution, mais ce n’est pas strictement requis dans le workflow défini par Holberton.

---

## ​ Détails des fichiers & fonctions

### `0-hello.c` (ou `0-hello_world.c`)
```c
#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");
    return (0);
}
