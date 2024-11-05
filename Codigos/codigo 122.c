#include <stdio.h>
#define COLUMNAS 3
#define FILAS 3

void numTablero (char c[COLUMNAS][FILAS]);
void tablero (char c[COLUMNAS][FILAS]);
void introPos (char c[COLUMNAS][FILAS]);

int main(){
    
    char c[COLUMNAS][FILAS];
    numTablero(c[COLUMNAS][FILAS]);
    tablero (c[COLUMNAS][FILAS]);
    return 0;
}

void numTablero (char c[COLUMNAS][FILAS]){

    char numPosicion = 1;
    for (int i = 0; i < 3; i++)
    {  
        for (int j=0; i < 3; j++)
        {
            c [i][j] = numPosicion++;
            printf("%c")
        }
        
    }
    
}

void tablero (char c [COLUMNAS][FILAS]){

    for (int i = 0; i < 3; i++)
    {
        for (int j = 1 ; j < 3 ; j++ ){
            printf("| %c |", c [i][j]);
        }
    }
    
}
