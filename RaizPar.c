#include<stdio.h>
#include <math.h>

void obtenerRaiz(int num){
    if(num % 2 == 0){
        printf("La raiz de %i es %.2f\n", num, sqrt(num));

    }else{
        printf("Por favor ingrese un numero par...\n");
    }
}