//Desarrollar un algoritmo que ingrese números hasta leer un cero, calcular y mostrar por pantalla cuántos de ellos son negativos y cuántos son positivos. 
#include <stdio.h>

int main() {
    int numero;
    int positivos = 0;
    int negativos = 0;

    printf("Ingrese números (0 para terminar): ");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 0) {
            positivos++;
        } else {
            negativos++;
        }
    }

    printf("Números positivos: %d\n", positivos);
    printf("Números negativos: %d\n", negativos);

    return 0;
}