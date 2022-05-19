/* Dado un menu seleccionar la opcion que desee el usuario
y realizar las operaciones deseadas 
1. Obtener la raiz cuadrada de un numero par.
2. Calcular la tabla de multiplicar de un numero cualquiera (For)
3. Imprimir los numero entre a y b (While)
4. Salir
*/

#include <stdio.h>
#include <stdlib.h>
#include "RaizPar.c"
#include "Tabla.c"
#include "Rango.c"
#include "Menu.c"

void obtenerRaiz(int num);
void calcularTabla(int num);
void imprimirRango(int a, int b);
void mostrarMenu();
int main(int argc, char const *argv[])
{
    int op, num, a, b; 
    do{
        system("cls");
        system("color b5");
        mostrarMenu();
        scanf("%i", &op);
        switch(op){
            case 1:
                printf("Digite un #: ");
                scanf("%i", &num);
                obtenerRaiz(num);
                system("pause");
                break;
            case 2:
                printf("Digite un #: ");
                scanf("%i", &num);
                calcularTabla(num);
                system("pause");
                break;
            case 3:
                printf("Digite el valor inicial: ");
                scanf("%i", &a);
                printf("Digite el valor final: ");
                scanf("%i", &b);
                imprimirRango(a, b);
                system("pause");
                break;
            case 4:
                printf("Adios....\n");
                break;
            default:
                printf("Opcion invalida...");
                system("pause");
                break;
                
        }
    }while(op!=4);
    

    return 0;
}

