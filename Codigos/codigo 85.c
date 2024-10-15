#include <stdio.h>

#define DIMENSION 10
int main() {
    int quiniela[DIMENSION] = {0};  
    int posicion, numero;
    
    for (int i = 0; i < DIMENSION; i++) {
        printf("Ingrese la posicion (1-10) donde vas a querer guardar el número de la quiniela: ");
        scanf("%d", &posicion);
        
        if (posicion < 1 || posicion > DIMENSION) {
            printf("Esa posicion no existe,  intentá de nuevo:\n");
            i--;
        }
        else{
            printf("Ingrese el numero para la posicion %d: ", posicion);
            scanf("%d", &numero);
            quiniela[posicion - 1] = numero;
        }
    }
    printf("\n los nummeros de la quiniela ingresados son:\n");
    for (int i = 0; i < DIMENSION; i++) {
        printf( "%d: %d\n", i + 1, quiniela[i]);
    }

    return 0;
}
