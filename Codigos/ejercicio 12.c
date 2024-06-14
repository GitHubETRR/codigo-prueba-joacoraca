//Construye un programa que pregunte los años que tienes y emita como respuesta el número de días vividos.
#include <stdio.h>


int main(){

    printf("Bienvenido a la calculadora de dias vividos");
    printf("\nIntroduce los años que tienes:");
    int anosvividos;
    scanf("%d", &anosvividos);
    int diasvividos=anosvividos*365;
    printf("Los dias que viviste son:\n%d", diasvividos);

}