#include <stdio.h>

int numint;
void tablaDeMultiplicar(numint);

int main(){

    printf("Hola! por favor introduzca un numero entero \n");
    scanf("%d", &numint);
    tablaDeMultiplicar(numint);
    return 0;

}

void tablaDeMultiplicar(numint){

    printf("Tabla de multiplicar de %d del 0 al 10\n", numint);
    for (int i = 0; i <=10 ; i++)
    {
        printf("%d x %d = %d \n", numint, i, numint*i);
    }
    
}