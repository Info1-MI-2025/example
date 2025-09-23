# Suvit du cours "Info1"


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