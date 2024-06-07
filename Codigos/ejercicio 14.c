//Construye un programa que permita ingresar los valores de 2 de los ángulos interiores de un triángulo, y se emita por pantalla el valor del restante.
#include <stdio.h>

int main(){

    printf("Ingresa el primer valor de tus angulos: \n");
    float primerangulo;
    scanf("%.2f", &primerangulo);
    printf("Ingresa el valor del segundo angulo: \n");
    float segundoangulo;
    scanf("%.2f", &segundoangulo);
    if (primerangulo>180 || segundoangulo>180)
    {
        printf("Un triangulo no puede tener un angulo de 180 o mayor");
    }
    else {
        float tercerangulo;
        tercerangulo=180-primerangulo-segundoangulo;
        printf("\nEl tercer valor de tu angulo es: %.2f", tercerangulo);
    }
    return 0;
}