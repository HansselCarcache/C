#include <stdlib.h>
#include <stdio.h>
#include "calcularFactorial.c"
#include "calcularPromedio.c"
#include "MayorNNumeros.c"

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}


void menu(){
int opcion = 0;
printf("Elija una opcion\n");
    printf("1-CalcularFactorial\n");
    printf("2-CalcularPromedio\n");
    printf("3-MayorNNumeros\n");
    scanf("%d", &opcion);
    opciones(opcion);
}

void opciones(int opcion){
    
    switch(opcion){
        case 1:
        
        printf("Escriba el numero: ");
        scanf("%d", &numero);
        calcularFactorial(numero);
        break;
        case 2:
         printf("Escriba el numero de notas: ");
        scanf("%d", &nNotas);
        calcularPromedio(nNotas);
        break;
        case 3:
        MayorNNumeros(NNumeros);
        break;
        default: 
        break;
    }
}


