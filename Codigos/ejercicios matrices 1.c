
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
void matrizRandom (int numRandom[N][N]);
void encontrarNumMax (int numRandom[N][N], int numMax);
int main (){
    int numRandom[N][N];
    int numMax;
    srand(time(NULL));
    matrizRandom(numRandom);
    encontrarNumMax(numRandom, numMax);
    return 0;
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

void encontrarNumMax (int numRandom[N][N], int numMax) {
    numMax = numRandom[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {  
            if (numRandom[i][j] > numMax) { 
                numMax = numRandom[i][j];
                printf("\nEl número max es: %d", numMax);
            }
        }
    }
}