# Correction du Quiz 03

## 1) Tableau double – moyenne des X premières valeurs
```c
double moyenne(double tab[], int taille, int x) {
    if (taille <= 0 || x <= 0)
        exit(1);

    if (x > taille)
        x = taille;

    double somme = 0.0;
    for (int i = 0; i < x; i++) {
        somme += tab[i];
    }

    return somme / x;
}
```

## 2) Comptage d’occurrences avec ou sans casse
```c
int count_char(char str[], char c, bool case_sensitive) {
    int count = 0;

    if (!case_sensitive)
        c = tolower(c);

    for (int i = 0; str[i] != '\0'; i++) {
        char current = str[i];

        if (!case_sensitive)
            current = tolower(current);

        if (current == c)
            count++;
    }

    return count;
}
```

## 3) Valeur maximale d’un tableau de int
```c
int max_tab(int tab[], int taille) {
    if (taille <= 0)
        return 0;

    int max = tab[0];
    for (int i = 1; i < taille; i++) {
        if (tab[i] > max)
            max = tab[i];
    }

    return max;
}
```

## 4) Remplacement des chiffres par ?
```c
void replace_digits(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            str[i] = '?';
        }
    }
}
```

## 5) Maximum de trois double
```c
double max3(double a, double b, double c) {
    double max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    return max;
}
```

6) Nombre de digits d’un entier (signe inclus)
```c
int count_digits(int value) {
    int count = 0;

    if (value == 0)
        return 1;

    if (value < 0) {
        count++;        // signe
        value = -value;
    }

    while (value > 0) {
        count++;
        value /= 10;
    }

    return count;
}

int count_digits(int value) {
    if (value == 0)
        return 1;

    int count = 0;

    if (value < 0) {
        count++;        // signe
        value = -value;
    }

    count += (int)log10(value) + 1;
    return count;
}
```

7) Exécution de code – affichage
```c
Text 1 : Test a b c
Sizeof 1 : 11
Strlen 1 : 10

Text 2 : comportement indéfini
Sizeof 2 : 3
Strlen 2 : comportement indéfini

Text 3 : Test
Sizeof 3 : 5
Strlen 3 : 4
```
