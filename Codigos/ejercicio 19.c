#include <stdio.h>
#include <math.h>


int main (){

    float cateto1, cateto2, hipotenusa=sqrt(pow(cateto1, 2)+pow(cateto2, 2));
    printf("Introduce el valor del primer cateto: \n");
    scanf("%f", cateto1);
    printf("Introduce el valor del segundo cateto: \n");
    scanf("%f", cateto2);
    printf("El valor de la hipotenusa es de %f", hipotenusa);
}