//Ingresar una matriz, de NxN valores en forma aleatoria, entre 1 y 30, donde N es 5,informar el valor máximo y su ubicación
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
void matrizRandom (int numRandom[N][N]);
int encontrarNumMax (int maxNum, int numRandom[N][N]);
int main (){
    int numRandom[N][N], maxNum;
    matrizRandom(numRandom);
    int encontrarNumMax (maxNum, numRandom);


}

void matrizRandom (int numRandom[N][N]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; i < N; j++)
        {
            numRandom [i][j] = (rand()%30) + 1;
            printf("%d\n", numRandom[i][j]);
        }
        printf("\n");
    }
}

int numRandom (int maxNum, int numRandom[N][N]){
    int numRandom[0][0];
    int maxNum
    numRandom[0][0] = maxNum;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; i < N; j++)
        {
            if (numRandom[i][j] > maxNum)
            {
                maxNum = numRandom [i][j];
                printf("El numero maximo es %d \n", maxNum);
            }
            
        }
        
    }
    

}