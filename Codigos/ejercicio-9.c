//Desarrolla un algoritmo que permita leer 2 valores y emitir por pantalla la suma de los dos, la resta, producto, división, promedio y el doble producto del primero menos la mitad del segundo.  
#include <stdio.h>



int main (){

    printf("Bienvenido a la calculadora de 2 numeros enteros");
    printf("\nPor favor, ingrese el primer numero: ");
    int primernumero;
    scanf("%d", &primernumero);
    printf("\nAhora ingresa el segundo numero entero: ");
    int segundonumero;
    scanf("%d", &segundonumero);
    printf("\nQue tipo de operacion quieres hacer\n");
    printf("(1)Suma\n(2)Resta\n(3)Division\n(4)Multiplicación");
    int tipodeoperacion;
    scanf("%d", &tipodeoperacion);
    if(tipodeoperacion==1)
    {
        int suma=primernumero+segundonumero;
        printf("El resultado es: %d", suma);
    }
    else {
        if (tipodeoperacion==2)
        {
            int resta=primernumero-segundonumero;
            printf("El resultado es: %d", resta);
        }
        else {
            if(tipodeoperacion==3){
                int division=primernumero/segundonumero;
                printf("El resultado es: %d", division);
            }
            else {
                if (tipodeoperacion==4)
                {
                    int multiplicacion=primernumero*segundonumero;
                    printf("El resultado es: %d", multiplicacion);
                }
                else {
                    printf("El numero que ingresaste no es valido");
                }
            }
        }
    }
    getchar();
    return 0;

}