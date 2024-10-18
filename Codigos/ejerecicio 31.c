//Desarrollar un algoritmo que ingrese por consola dos números enteros, a continuación, indique si son iguales o distintos. 
#include <stdio.h>


int main(){

    int num1, num2;
    printf("Hola, introduce 2 numeros enteros");
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num1 == num2)
    {
        printf("Estos numeros son iguales");
    }
    else {
        printf("Estos numeros son distintos");
    }
}