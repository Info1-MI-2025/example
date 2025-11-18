#include <stdio.h>

#define NBR_VALUES 10
#define ERROR_SAISIE 1

int main(){

    double values[NBR_VALUES] = {0};
    int nbr_value = 0;

    printf("Nombre de valeur que vous voulez saisir entre 1 et %d : ", NBR_VALUES);
    scanf("%d", &nbr_value); // retour + buffer

    // controle de la taille
    if(nbr_value > NBR_VALUES){
        return ERROR_SAISIE;
    }

    for(int i=0; i<nbr_value; i++){
        prinf("Entrer une valeur\n>");
        double val;
        scanf("%lf", &val); // simple : scanf("%d", &values[i]);
        values[i] = val;
    }

    // calcul moyenne
    double mean = 0.0;
    for(int i=0; i<nbr_value; i++){
        mean += values[i];
    }
    mean /= nbr_value;

    printf("La moyenne vaut : %.2lf", mean);
}