#include <stdio.h>

#define NBR_END 11

int main(){
    int tab[NBR_END];

    for(int i=0; i<NBR_END; i++){
        tab[i] = i+1;
    }
    // indice : 0 1 2 3 4 5 6 
    // valeur : 1 2 3 4 5 6 7 
    // supprime les multiples de 2
    // for(int i=1+2; i<NBR_END; i+=2){
    //     tab[i] = -1;
    // }

    // supprime les multiples de 3
    // for(int i=2+3; i<NBR_END; i+=3){
    //     tab[i] = -1;
    // }

    for(int ind=1; ind<NBR_END; ind++){
        int multiple = tab[ind];
        
        if(tab[ind] < 0)
            continue;

        printf("Supprime multiple de : %d\n", multiple);
        for(int i=ind+multiple; i<NBR_END; i+=multiple){
            tab[i] = -1;
        }    
    }

    for(int i=0; i<NBR_END; i++){
        if( tab[i] > 0 )
            printf("%d ", tab[i]);
    }
}
