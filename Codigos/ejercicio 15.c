//Construye un programa que permita ingresar las medidas de los lados de un rectángulo; el mismo debe emitir por pantalla su superficie y su perímetro.
#include <stdio.h>

int main(){
    
    float lado1, lado2, perimetro, superficie;
    printf("Introduce la medida del lado 1 de tu rectangulo: \n");
    scanf("%f", &lado1);
    printf("Introduce la medida del lado 2: \n");
    scanf("%f", &lado2);
    superficie = lado1 * lado2;
    perimetro = 2 * (lado1 + lado2);
    printf("\nEl area es de %.2f y el perimetro de %.2f", superficie, perimetro);
    return 0;
}