#include <stdio.h>

int potencia(int x, int y);

int main() {
    int x, y;
    printf("Ingrese el valor de X: ");
    scanf("%d", &x);
    printf("Ingrese la potencia Y: ");
    scanf("%d", &y);
    int resultado = potencia(x, y);
    printf("El resultado de %d elevado a %d es: %d\n", x, y, resultado);
    return 0;
}

int potencia(int x, int y) {
    int resultado = 1;
    for (int i = 0; i < y; i++) {
        resultado *= x;
    }
    return resultado;
}