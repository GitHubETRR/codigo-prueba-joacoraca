#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void loteria(); 

int main() {
    printf("Bienvenido a la lotería, tus números son:\n");
    loteria();
    return 0;
}

void loteria() {
    int numLot[6];
    for (int i = 0; i < 6; i++) {
        numLot[i] = rand() % 54 + 1;  
        printf("%d ", numLot[i]);    
    }
}