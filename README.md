# Suvit du cours "Info1"

## 11.11 : Fonctions
résumé : [lien](https://cyberlearn.hes-so.ch/mod/resource/view.php?id=2117038)

handout : [lien](https://heig-tin-info.github.io/handout/content/functions.html#fonctions)

Une fonction en C est un bloc de code réutilisable qui effectue une tâche spécifique. Elle permet de structurer le code, de le rendre plus lisible et de faciliter la maintenance.

Elle permet de diviser un programme en sous-parties logiques, chacune responsable d'une tâche particulière. Cela améliore la lisibilité du code et facilite la collaboration entre plusieurs développeurs.
Elle permet aussi de réutiliser du code, évitant ainsi la duplication.

### Définition d'une fonction
Pour définir une fonction en C, on utilise la syntaxe suivante :
```c
type_de_retour nom_de_fonction(parametres) {
    // Corps de la fonction
}
``` 

Exemple de fonction qui calcule la somme de deux entiers :
```c
int addition(int a, int b) {
    return a + b;
}
```

## 29/10 : Les boucles
résumé : [lien](https://cyberlearn.hes-so.ch/mod/resource/view.php?id=2117038)

handout : [lien](https://heig-tin-info.github.io/handout/content/processus.html)

### Boucle while
La boucle `while` permet d'exécuter un bloc de code tant qu'une condition est vraie. On l'utilise lorsque le nombre d'itérations n'est pas connu à l'avance.

```c
  while (count < 5) {
      printf("Count: %d\n", count);
      count++;
  }
```

### Boucle do...while
La boucle `do...while` est similaire à la boucle `while`, mais elle garantit que le bloc de code est exécuté au moins une fois avant de vérifier la condition.

### Boucle for
La boucle `for` est utilisée lorsque le nombre d'itérations est connu à l'avance. Elle combine l'initialisation, la condition et l'incrémentation en une seule ligne.
```c
  for (int i = 0; i < 5; i++) {
      printf("i: %d\n", i);
  }
```

### Break
L'instruction `break` permet de sortir immédiatement d'une boucle.

### Continue
L'instruction `continue` permet de sauter l'itération courante d'une boucle et de passer à l'itération suivante.


## 14/10 : Format et caractères
### Git
git : [slides](https://cyberlearn.hes-so.ch/mod/resource/view.php?id=2969777)

Les commandes de base pour utiliser git sont :
- `git clone <url>` : cloner un dépôt distant
- `git status` : vérifier l'état des fichiers dans le dépôt local
- `git add <fichier>` : ajouter un fichier à l'index pour le prochain commit
- `git commit -m "message"` : créer un commit avec un message descriptif
- `git push` : envoyer les commits locaux vers le dépôt distant
- `git pull` : récupérer les modifications du dépôt distant et les fusionner avec le dépôt

### Accès à un caractère dans une chaîne de caractères
Pour accéder à un caractère spécifique dans une chaîne de caractères, on utilise l'indexation avec des crochets `[]`. L'indexation commence à 0, donc le premier caractère est à l'index 0, le deuxième à l'index 1, et ainsi de suite.

Exemple pour accèder au premier caractère du deuxième argument de la ligne de commande :

`./app -h`

```c
const char firstChar = argv[1][0]; // Accède au premier caractère du deuxième argument
printf("Le premier caractère du deuxième argument est : %c\n", firstChar);
```

### Format `printf` avec `*`

Le format `*` dans `printf` permet de spécifier la largeur ou la précision d'un champ à partir d'une variable. Voici un exemple :

```c
#include <stdio.h>
int main() {
    int width = 10;
    float value = 3.14159;
    printf("Largeur : %*d, Précision : %.*f\n", width, 42, 2, value);
    return 0;
}
```


## 07/10 : Retour scanf et arguments
handout : [lien](https://heig-tin-info.github.io/handout/content/processus.html?highlight=argument#entrees-sorties)

### SSCANF
`sscanf` est similaire à `scanf`, mais au lieu de lire à partir de l'entrée standard, il lit à partir d'une chaîne de caractères. Voici comment l'utiliser :
```c
#include <stdio.h>
int main() {
    const char input[] = "25 1.75";
    int age;
    double height;
    sscanf(input, "%d %f", &age, &height);
    printf("Age: %d, Height: %.2f\n", age, height);
    return 0;
}
```

### Retour de scanf et sscanf
Le retour de `scanf` et `sscanf` indique le nombre d'éléments correctement lus et assignés aux variables. Si le retour est différent du nombre attendu, cela signifie qu'une erreur s'est produite lors de la lecture des données.

### Arguments de la ligne de commande
Les argumnents de la ligne de commande permettent de passer des informations à un programme lors de son exécution. Voici comment les utiliser en C :

Comme les arguments sont passés dans un tableau, ils seront accèssibles via un indice, en commençant par 0. Le premier argument (indice 0) est toujours le nom du programme lui-même. Le second argument (indice 1) est le premier argument passé par l'utilisateur, et ainsi de suite.
Pour accèder à un argument spécifique, on utilise `argv[index]`, où `index` est l'indice de l'argument souhaité.

```c
#include <stdio.h>
int main(int argc, char *argv[]) {
    // argc : nombre d'arguments (y compris le nom du programme)
    // argv : tableau de chaînes de caractères contenant les arguments
    printf("Nombre d'arguments : %d\n", argc);
    printf("Nom du programme : %s\n", argv[0]);

    int value = 0;
    if (argc > 1) {
        // Convertir le premier argument en entier
        const int ret = sscanf(argv[1], "%d", &value);
        if (ret == 1) {
            printf("Premier argument en entier : %d\n", value);
        } else {
            printf("Erreur de conversion.\n");
        }
    } else {
        printf("Aucun argument fourni.\n");
    }
}
```

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
