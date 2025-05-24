# 📂 0x0A. C - argc, argv

Ce projet explore la gestion des arguments passés en ligne de commande dans le langage C, en utilisant les paramètres `argc` et `argv` de la fonction `main`. Il fait partie du cursus de programmation bas niveau à Holberton School.

## 🗂️ Contenu du répertoire

- `0-whatsmyname.c` : Affiche le nom du programme.
- `1-args.c` : Affiche le nombre d'arguments passés au programme.
- `2-args.c` : Affiche tous les arguments reçus.
- `3-mul.c` : Multiplie deux nombres passés en arguments.
- `4-add.c` : Additionne des nombres passés en arguments.
- `100-change.c` : Calcule le nombre minimal de pièces pour rendre une somme donnée.

## 🔧 Détails des fichiers et fonctions

### `0-whatsmyname.c`

- **Fonction** : `main`
- **Prototype** : `int main(int argc, char *argv[]);`
- **Utilité** : Affiche le nom du programme suivi d'un saut de ligne.

### `1-args.c`

- **Fonction** : `main`
- **Prototype** : `int main(int argc, char *argv[]);`
- **Utilité** : Affiche le nombre d'arguments passés au programme, suivi d'un saut de ligne.

### `2-args.c`

- **Fonction** : `main`
- **Prototype** : `int main(int argc, char *argv[]);`
- **Utilité** : Affiche tous les arguments reçus, un par ligne.

### `3-mul.c`

- **Fonction** : `main`
- **Prototype** : `int main(int argc, char *argv[]);`
- **Utilité** : Multiplie deux nombres passés en arguments et affiche le résultat. Affiche "Error" si le nombre d'arguments est incorrect.

### `4-add.c`

- **Fonction** : `main`
- **Prototype** : `int main(int argc, char *argv[]);`
- **Utilité** : Additionne des nombres passés en arguments et affiche le résultat. Affiche "Error" si un argument n'est pas un nombre entier positif.

### `100-change.c`

- **Fonction** : `main`
- **Prototype** : `int main(int argc, char *argv[]);`
- **Utilité** : Calcule le nombre minimal de pièces pour rendre une somme donnée en cents. Affiche "Error" si le nombre d'arguments est incorrect.

## 🧪 Compilation

Pour compiler les fichiers, utilisez la commande suivante :

```bash
gcc -Wall -Wextra -Werror -pedantic <nom_du_fichier>.c -o <nom_de_l'exécutable>
