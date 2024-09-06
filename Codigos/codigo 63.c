#include <stdio.h>

void areaRectangulo(int base, int altura, int* area);
int mutliplo(int a, int b);

void areaRectangulo(int base, int altura, int* area) {
    area = base * altura;
}

int multiplo(int a, int b) {
    if (b == 0) {
        printf("Error: no se puede dividir entre cero\n");
        return 0;
    }
    if (a % b == 0) {
        printf("verdadero\n");
    } else {
        printf("falso\n");
    }
}


int main() {
    int a, b, area;
    printf("Introduce dos numeros\n");
    scanf("%d", &a);
    scanf("%d", &b);
    multiplo(a, b);

    int base,altura;
    printf("Introduce la base primero y luego la altura\n");
    scanf("%d", &base);
    scanf("%d", &altura);
    areaRectangulo(base, altura, &area);
    printf("El área del rectángulo es: %d\n", area);

    return 0;
}
