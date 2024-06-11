#include <stdio.h>


int main() {
    printf("Bienvenido a la calculadora de area");
    const float PI = 3.14; 
    float radio;
    float area = PI * radio * radio;
    printf("Ingresa el radio del circulo: ");
    scanf("%f", &radio);
    printf("El area del circulo es: %f\n", area);
    return 0;
}