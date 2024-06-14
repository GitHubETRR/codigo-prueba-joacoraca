//Dada una cantidad entera de segundos (menor a 86400) y conviértela en horas, minutos y segundo utilizando los operadores de cociente y resto enteros.
#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundosRestantes;
    printf("Introduce el tiempo en segundos: \n");
    scanf("%d", &segundos);
    horas= segundos/3600;
    minutos=(segundos%3600) / 60;
    segundosRestantes=segundos%60;
    printf("El tiempo es %dhoras %dminutos %dsegundos", horas, minutos, segundosRestantes);
    return 0;
}