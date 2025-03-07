//Para probar un congelador, la fábrica registra en un listado la temperatura en el interior durante todos los días del mes de junio. Escriba una función que reciba un vector con todas estas tempTotales (generalmente, negativas) y devuelva la mínima temperatura. Luego escriba una segunda función que diga en qué día del mes se produjo la temperatura mínima. 
#include <stdio.h>
#include <stdlib.h>

int encontrarMinTemp (int tempTotales[]);
int encontrarDiaMinTemp (int minTemp, int tempTotales);

int main (){
    int tempTotales[30];
    for (int i = 0; i < 30; i++)
    {
        tempTotales[i] = rand () % 101 * -1;
        printf("%d \n", tempTotales[i]);
    }
    int minTemp = encontrarMinTemp(tempTotales);
    int diaTempMin = encontrarDiaMinTemp(minTemp, tempTotales);
    return 0;
}

int encontrarMinTemp(int tempTotales[]) {
    int minTemp = tempTotales[0];
    for (int i = 1; i < 30; i++) {
        if (tempTotales[i] < minTemp) {
            minTemp = tempTotales[i];
        }
    }
        printf("La mínima temperatura es \n%d °C", minTemp );
}

int encontrarDiaMinTemp(int minTemp, int tempTotales) {
    int diaTempMin;
    for (int i = 0; i < 30; i++) {
        if (tempTotales[i] == minTemp) {
            int diaTempMin = i;
            printf("La temperatura mínima se produjo el día %d del mes de Junio \n", diaTempMin);
            
        }
    }
}