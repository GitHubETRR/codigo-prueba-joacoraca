//Desarrollar un algoritmo que permita leer un valor que represente una temperatura expresada en grados Celsius y convierta dicho valor en un valor expresado en grados Fahrenheit.  
#include <stdio.h>

int main (){

    float tempC, tempF;
    printf("Por favor introduce la temperatura(en Celsius): \n");
    scanf("%f", &tempC);
    tempF= (tempC * 9/5) +32;
    printf("La temperatura es %f", tempF);
    getchar();
    return 0;
}