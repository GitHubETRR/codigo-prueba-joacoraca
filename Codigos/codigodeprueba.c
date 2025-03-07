
#include <stdio.h>

float calculadora_circulo_area(float radio) {
    const float PI = 3.14159;

    float area = PI * (radio * radio);

    return area;
}

int main() {
    float radio;
    printf("Ingresa el radio del circulo ");
    scanf("%f", &radio);

    float area = calculadora_circulo_area(radio);

    printf("El area del circulo %f es: %f\n", radio, area);

    return 0;
}