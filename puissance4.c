#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define NBR_COL 7
#define NBR_LINE 6

#define EMPTY ' '
#define P1 'O'
#define P2 'X'

// return the line where the coin is inserted
// return -1 if the column is full
int insert_coin(int col, char tab[NBR_LINE][NBR_COL], char player){
    for(int l=0; l<NBR_LINE; l++){
        if(tab[l][col] == EMPTY){
            tab[l][col] = player;
            return l;
        }
    }
    return -1;
}

// initialize the table with the default value
void init_tab(char tab[NBR_LINE][NBR_COL], char def_value){
    for( int l=0; l<NBR_LINE; l++){
        for(int c=0; c<NBR_COL; c++){
            tab[l][c] = def_value;
        }
    }
}

bool check_position_win(int col, int line, char tab[NBR_LINE][NBR_COL], char player){
    
    int count = 1;
    int start_col = col;
    int start_line = line;

    int check_col = start_col+1; // right
    int check_line = start_line;

    // check horizontal
    while( check_col < NBR_COL && tab[check_line][check_col] == player ){
        count++;
        check_col++;
    }

    check_col = start_col-1; // left
    while( check_col >= 0 && tab[line][check_col] == player ){
        count++;
        check_col--;
    }
    if( count >= 4 )
        return true;

    // check vertical
    count = 1;
    check_col = start_col;
    check_line = start_line+1; // up

    while( check_line < NBR_LINE && tab[check_line][check_col] == player ){
        count++;
        check_line++;
    }

    check_line = start_line-1; // down
    while( check_line >= 0 && tab[check_line][check_col] == player ){
        count++;
        check_line--;
    }
    if( count >= 4 )
        return true;


    // check diagonal bottom left to top right
    count = 1;
    check_col = start_col+1;
    check_line = start_line+1;
    while( check_col < NBR_COL && check_line < NBR_LINE && tab[check_line][check_col] == player ){
        count++;
        check_col++;
        check_line++;
    }

    check_col = start_col-1;
    check_line = start_line-1;
    while( check_col >= 0 && check_line >= 0 && tab[check_line][check_col] == player ){
        count++;
        check_col--;
        check_line--;
    }
    if( count >= 4 )
        return true;

    // check diagonal top left to bottom right
    count = 1;
    check_col = start_col+1;
    check_line = start_line-1;

    while( check_col < NBR_COL && check_line >= 0 && tab[check_line][check_col] == player ){
        count++;
        check_col++;
        check_line--;
    }

    count = 1;
    check_col = start_col-1;
    check_line = start_line+1;
    while( check_col >= 0 && check_line < NBR_LINE && tab[check_line][check_col] == player ){
        count++;
        check_col--;
        check_line++;
    }
    if( count >= 4 )
        return true;

    return false;
}

void print_table(char tab[NBR_LINE][NBR_COL]){
    
    printf("\n Column\n   ");
    for(int c=0; c<NBR_COL; c++){
        printf("  %d ", c);
    }
    printf("\n\n");

    for( int l=NBR_LINE-1; l>=0; l--){
        
        printf("%d) ", l);
        for(int c=0; c<NBR_COL; c++){
            printf("| %c ", tab[l][c]);
            if( c == NBR_COL-1 )
                printf("|");
        }
        printf("\n   ");
        for(int c=0; c<NBR_COL; c++){
            printf("----");
            if( c == NBR_COL-1 )
                printf("-");
        }   
        printf("\n");
    }
}

void insert_and_check(int col, char tab[NBR_LINE][NBR_COL], char player){
    int line = insert_coin(col, tab, player);

    if( line == -1 ){
        printf("Column %d is full", col);
        exit(0);
    }

    if( check_position_win(col, line, tab, player) ){        
        print_table(tab);
        printf("\nPLAYER %c win\n", player);
        exit(0);
    }
}

void play(char tab[NBR_LINE][NBR_COL]){

    //int game[] = {1,2,0,0,2,6,4,3,2,2,3,3,3,4,4,6,2,0,5,0,5}; // win diag
    //int game[] = {3,3,3,3,3,3,3}; // check full
    int game[] = {0,0,1,0,2,2,3};
    //int game[] = {0,1,1,2,2,2,4,4,4,4};

    const size_t s = sizeof(game) / sizeof(game[0]);

    for(int i=0; i<s; i++){
        if( i % 2 == 0 )
            insert_and_check(game[i], tab, P1);
        else
            insert_and_check(game[i], tab, P2);
    }
}

int main(int argc, char *argv[]){

    char tab[NBR_LINE][NBR_COL];

    init_tab(tab, EMPTY);

    printf("\n");

    play(tab);

    print_table(tab);

    return 0;
}
