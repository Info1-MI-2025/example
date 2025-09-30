# Suvit du cours "Info1"



## 30/09 : Scanf simple

handout : [lien](https://heig-tin-info.github.io/handout/content/stdio.html?highlight=scanf#scanf)

cours : [slide 30](https://cyberlearn.hes-so.ch/mod/resource/view.php?id=2093596)

résumé : [lien](https://cyberlearn.hes-so.ch/mod/resource/view.php?id=2117038)

scanf permet de lire des données depuis l'entrée standard (généralement le clavier) et de les stocker dans des variables. Voici comment l'utiliser :

- le `scanf` ne tient pas compte des espaces, tabulations et retours à la ligne avant les données
- le `&` avant le nom de la variable est nécessaire pour passer l'adresse de la variable à `scanf`
- le format dans `scanf` doit correspondre au type de la variable
- comme pour le `printf`, il est possible d'utiliser plusieurs variables dans un `scanf`.

```c
#include <stdio.h>
int main() {
    int age;
    float taille;
    printf("Entrez votre âge et votre taille (en mètres) : ");
    scanf("%d %f", &age, &taille);
    printf("Vous avez %d ans et vous mesurez %.2f mètres.\n", age, taille);
}
```

## 24/09 : Structures de contrôle
### Structures conditionnelles
handout : [lien](https://heig-tin-info.github.io/handout/content/control-structures.html#les-embranchements)
- `if (condition) { ... }` : exécute le bloc si la condition est vraie
- `if (condition) { ... } else { ... }` : exécute le premier bloc si la condition est vraie, sinon le second
- `if (condition1) { ... } else if (condition2) { ... } else { ... }` : chaîne de conditions

### printf avancé
handout : [lien](https://heig-tin-info.github.io/handout/content/stdio.html?highlight=printf#printf)
- `%f` : nombre flottant
- `%.2f` : nombre flottant avec 2 décimales
- `%.5.2f` : nombre flottant avec un total de 5 chiffres, dont 2 après la virgule (attention le . compte aussi)
-  Avec le nombre `%2d` ou `%-2d` on peut définir une largeur minimale pour l'affichage d'un entier (ici 2 caractères). Si le nombre est plus petit, des espaces seront ajoutés à gauche ou à droite selon le signe -.

## 23/09 : Variables et types de données
### Les nombres et les bases
- nombre : https://heig-tin-info.github.io/handout/content/datatype.html#les-nombres-reels
- binaire : https://heig-tin-info.github.io/handout/content/numeration.html#systeme-binaire
- hexadécimal : https://heig-tin-info.github.io/handout/content/numeration.html#systeme-hexadecimal
- complement à 2 : https://heig-tin-info.github.io/handout/content/numeration.html#complement-a-deux

- ASCII : https://heig-tin-info.github.io/handout/content/ascii.html

### Les commandes de bases sous Linux
- `ls -la` : liste les fichiers et dossiers dans le répertoire courant
- `cd` : change de répertoire
- `pwd` : affiche le chemin du répertoire courant
- `mkdir` : crée un nouveau répertoire
- `cd ..` : remonte d'un niveau dans l'arborescence
- `rm` : supprime un fichier

### Compilations
- `gcc nom_du_fichier.c -o nom_du_programme` : compile un fichier C et crée un exécutable nommé `nom_du_programme`
- `./nom_du_programme` : exécute le programme compilé
- `gcc -Wall nom_du_fichier.c -o nom_du_programme` : compile avec tous les avertissements activés
- `gcc -g nom_du_fichier.c -o nom_du_programme && ./nom_du_programme` : compile avec les informations de débogage et exécute le programme

### Variables en C
- Déclaration d'une variable : `type nom_variable;`
  - Exemple : `int age;`
  - Variable entière signée : `int`
  - Variable entière non signée : `unsigned int`
  - Variable flottante : `double`
  - Variable caractère : `char`
- Initialisation d'une variable : `type nom_variable = valeur;`
  - Exemple : `int age = 25;`
- Constantes : `const type nom_constante = valeur;`
  - Exemple : `const double PI = 3.14159;`

### Affichage
- `printf("Texte à afficher\n");` : affiche du texte à l'écran
- Formatage dans `printf` :
  - `%d` : entier
  - `%lf` : nombre flottant double
  - `%c` : caractère

## 16/09 : Introduction et outils
- Comme outils, on utilisera : 
  - Cyberlearn : https://cyberlearn.hes-so.ch/course/view.php?id=26109
  - GitHub : https://github.com/Info1-MI-2025
  - Teams : o600l2l
