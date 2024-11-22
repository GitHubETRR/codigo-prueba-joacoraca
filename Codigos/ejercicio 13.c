//Construye un programa que dados el valor de 1 kg de determinada mercadería y la cantidad mercadería comprada, emite el valor del total a pagar
//Elegí las papas como mercancía
#include <stdio.h>


int main (){

    printf("Binvenido a la calculadora de precio de papas\n");
    printf("Introduce el peso de las papas:\n");
    float kilospapa;
    scanf("%f", &kilospapa);
    float preciospapa=kilospapa*1748;
    printf("Las papas valen:\n %.2f", preciospapa);
    getchar();
    return 0;
}