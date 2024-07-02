//Construye un programa que permita ingresar 2 tiempos, expresados en horas, minutos y segundos, el mismo debe emitir por pantalla la suma de ambos (también en horas, minutos y segundos).  
#include <stdio.h>

int main (){
    int h1, m1, s1, h2, m2, s2;
    printf("Ingrese el primer tiempo en horas, minutos, segundos: \n");
    scanf("%d %d %d", &h1, &m1, &s1);
    printf("Ingrese el segundo tiempo en horas, minutos y segundos: \n");
    scanf("%d %d %d", &h2, &m2, &s2);
    int h3=h1+h2, m3=m1+m2, s3=s1+s2;
    printf("La suma de los dos tiempos es: %d horas, %d minutos, %d segundos", h3, m3, s3 );
    return 0;
}