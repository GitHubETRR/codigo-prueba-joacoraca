#include <stdio.h>
int getDia(fecha_t fecha);
int getMes(fecha_t fecha);
int getAnio(fecha_t fecha);
int siEsBisiesto(int anio);

typedef struct {
    int dia;
    int mes;
    int anio;
} fecha_t;

int getDia(fecha_t fecha) {
    return fecha.dia;
}

int getMes(fecha_t fecha) {
    return fecha.mes;
}

int getAnio(fecha_t fecha) {
    return fecha.anio;
}

int siEsBisiesto(fecha_t fecha) {
    return (fecha.anio % 4 == 0 && fecha.anio % 100 != 0) || (fecha.anio % 400 == 0);
}

int main() {
    printf("Día: %d\n", getDia(fechaHoy));
    printf("Mes: %d\n", getMes(fechaHoy));
    printf("Año: %d\n", getAnio(fechaHoy));
    if (siEsBisiesto(fechaHoy)) {
        printf("El año %d es bisiesto.\n", getAnio(fechaHoy));
    } else {
        printf("El año %d no es bisiesto.\n", getAnio(fechaHoy));
    }
    return 0;
}
