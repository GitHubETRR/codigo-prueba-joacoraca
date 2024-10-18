//Ingresar una matriz, de NxN valores en forma aleatoria, entre 1 y 30, donde N es 5,informar el valor máximo y su ubicación
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
void matrizRandom (int numRandom[N][N]);
int encontrarNumMax (int numRandom[N][N]);
int main (){
    int numRandom[N][N], numMax;
    matrizRandom(numRandom);
    printf("El número máximo es %d", numMax);
}

void matrizRandom (int numRandom[N][N]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            numRandom [i][j] = (rand()%30) + 1;
            printf("%d ", numRandom[i][j]);
        }
        printf("\n");
    }
}

int encontrarNumMax (int numRandom[N][N]) {
    int numMax = numRandom[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {  
            if (numRandom[i][j] > numMax) { 
                numMax = numRandom[i][j];
            }
        }
    }
}