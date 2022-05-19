#include <stdio.h>

void imprimirRango(int a, int b){
    int cont;
    printf("Imprime los numeros entre %i y %i\n", a, b);
    if (a < b){
        cont= a+1;
        printf("Imprmir ascendente...\n");
        while(cont < b){
            printf("%i \n", cont);
            cont++;
        }

    }else{
        printf("Imprimir descendente...\n");
        cont = a-1;
        printf("cont = %i, b = %i\n", cont, b);
        while(cont > b){
            printf("%i \n", cont);
            cont--;
        }
    }
    
}