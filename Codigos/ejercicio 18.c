#include <stdio.h>


int main() {
    const float PI = 3.14;
    printf("Bienvenido a la calculadora de area"); 
    float radio;
    printf("Ingresa el radio del circulo: ");
    scanf("%f", &radio);
    float area = PI * radio * radio;
    printf("El area del circulo es: %f\n", area);
    return 0;
}
