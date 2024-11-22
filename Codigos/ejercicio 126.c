#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anio;
} fecha_t;

int getDia(fecha_t f) {
    return f.dia;
}

int getMes(fecha_t f) {
    return f.mes;
}

int getAnio(fecha_t f) {
    return f.anio;
}

int siEsBisiesto(fecha_t f) {
    return (f.anio % 4 == 0 && f.anio % 100 != 0) || (f.anio % 400 == 0);
}

int main() {
    fecha_t hoy = {22, 11, 2024};
    printf("Día: %d\n", getDia(hoy));
    printf("Mes: %d\n", getMes(hoy));
    printf("Año: %d\n", getAnio(hoy));
    if (siEsBisiesto(hoy)) {
        printf("El año %d es bisiesto.\n", getAnio(hoy));
    } else {
        printf("El año %d no es bisiesto.\n", getAnio(hoy));
    }
    return 0;
}
