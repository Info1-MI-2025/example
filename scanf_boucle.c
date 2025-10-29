#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[]){

    // on utilise un type bool pour représenter une valeur true/false
    bool test = 12 > 5;

    // test de la boucle while
    int i1 = 20;
    while(i1 < 10)
    {
        printf("Val i1 : %d\n", i1);
        i1++;
    }

    // exemple d'une boucle do...while
    int i2 = 5;
    do
    {
        i2--; // i2 = i2 - 1;
        printf("Val i2 : %d\n", i2);
    } while (i2 > 0);
    

    // la boucle for
    for(int i=0; i<10; i++){
        printf("Val for : %d\n", i);
    }

    // repeter caractère
    int nbr = 5;
    for(int i=0; i<nbr; i++){
        printf("-");
    }

    printf("\n");

    // les multiples de 9
    for(int i=0; i<100; i+=9){
        printf("%d ", i);
    }

    // saisie utilisateur avec test d'erreur
    int value;
    int ret;
    bool error;
    do{
        error = false;
        printf("Entrez une valeur entière :\n>");
        ret = scanf("%d", &value); // toujours tester la valeur de retour
        
        // soluce 1
        // toujours vider la mémoire après un scanf
        char c;
        printf("Vals del : ");
        do{
            c = getchar();
            if( c != '\n' && !error){
                error = true;
                printf("Y a des caractères en trop\n");
            }
            printf(" %c", c);
        }while(c != '\n');

        // soluce 2
        //while(getchar() != '\n'){}

        if(ret != 1){
            printf("Ce n'est pas une valeur entière\n");
        }
    }while(ret != 1 || error);
}
