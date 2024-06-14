//Desarrolla un algoritmo que permita, dados ciertos centímetros como entrada de tipo flotante, emitir por pantalla su equivalencia en pies (enteros) y en pulgadas. 

#include <stdio.h>


int main(){

    float centimetros;
    printf("Bienvenido a transformadora de cm a pulgadas y pies\n");
    printf("Ingresa la medida en cm: ");
    scanf("%f", &centimetros);
    printf("La medida en en pies y pulgadas es: \n");
    int pies=(centimetros/30.48);
    float pulgadas=(centimetros/2.54) - (pies*12);
    printf("%ift y %.2finch", pies, pulgadas);
    return 0;
}