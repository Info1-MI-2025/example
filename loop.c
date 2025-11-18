#include <stdio.h>
#include <stdbool.h> // permet d'utiliser bool

int main(int argc, char* argv[]){

    int value;
    do{
        printf("Entrez une valeur entière :\n>");
        const int ret = scanf("%d", &value); // toujours tester la valeur de retour
        while(getchar() != '\n'){}
        
        if(ret == 1){
            break;
        }
        printf("Ce n'est pas une valeur entière\n");
    }while(true);

    printf("La valeur saisie vaut : %d", value);
}
