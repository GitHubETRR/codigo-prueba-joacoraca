#include <stdio.h>

int main() {
    float angulo1, angulo2, angulo3;

    printf("Ingrese el valor del primer ángulo (en grados): ");
    scanf("%f", &angulo1);

    printf("Ingrese el valor del segundo ángulo (en grados): ");
    scanf("%f", &angulo2);

    // Calculo el tercer ángulo
    angulo3 = 180 - (angulo1 + angulo2);

    printf("El valor del tercer ángulo es: %.2f grados\n", angulo3);

    return 0;
}