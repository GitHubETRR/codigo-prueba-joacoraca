//Para probar un congelador, la fábrica registra en un listado la temperatura en el interior durante todos los días del mes de junio. Escriba una función que reciba un vector con todas estas tempTotales (generalmente, negativas) y devuelva la mínima temperatura. Luego escriba una segunda función que diga en qué día del mes se produjo la temperatura mínima. 
#include <stdio.h>
#include <stdlib.h>

int encontrarMinTemp (tempTotales);
int encontrarDiaMinTemp (minTemp);

int main (){
    int tempTotales[30];
    for (int i = 0; i < 30; i++)
    {
        tempTotales[i] = rand () % 101 * -1;
        printf("%d \n", tempTotales[i]);
    }
    printf("Y la temperatura mínima es : \n%d", encontrarMinTemp);
    //printf("En el día: %d \n", encontrarDiaMinTemp);
    return 0;
}

int encontrarMinTemp(int tempTotales) {
    int minTemp = tempTotales[0];
    for (int i = 0; i < 30; i++) {
        if (tempTotales[i] < minTemp) {
            minTemp = tempTotales[i];
        }
        printf("%d", minTemp)
    }
}