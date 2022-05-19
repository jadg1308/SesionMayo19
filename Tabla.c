#include<stdio.h>

void calcularTabla(int num){
    printf("Tabla de multiplicación del %i\n", num);
    for (int i = 1; i<= 12; i++){
        printf("\t %i \t * \t %i \t = \t %i\n", i, num, i*num);
    }
}