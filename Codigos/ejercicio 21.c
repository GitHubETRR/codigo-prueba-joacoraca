// Dada una fecha en el formato DDMMAAAA y separarlo en Dia, Mes y Año utilizando operaciones aritméticas.  
#include <stdio.h>


int main(){

    printf("Introduce la fecha en formato DDMMAAAA\n");
    int ddmmaaaa, dias, mes, año;
    scanf("%d", &ddmmaaaa);
    dias= ddmmaaaa / 1000000;
    mes = ddmmaaaa / 10000000;
    año = ddmmaaaa % 10000;
    printf("%ddias %dmes %daño", dias, mes, año);
    getchar();
    return 0;
}