#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Estructura.h"
#include "Productos.c"




int main(int argc, char const *argv[])
{
    prod[0].codigo = 1;   
    strcpy(prod[0].nombre, "producto1");
    prod[0].precio = 23;

    prod[1].codigo = 2;   
    strcpy(prod[1].nombre, "producto2");
    prod[1].precio = 234;
    
    menu();
    return 0;
}

void menu(){
int opcion = 0;
printf("Elija una opcion\n");
    printf("1-Realizar Pedido\n");
    printf("2-Mostrar Productos\n");
    printf("3-Sugerir Productos\n");
    printf("4-Mostrar Factura\n");
    printf("5-Salir del sistema\n");
    scanf("%d", &opcion);
    opciones(opcion);
}

void opciones(int opcion){
    
    switch(opcion){
        case 1:
        realizarPedido();
        
        
        break;
        case 2:
        
        menuProductos();
       
        break;
        case 3:
        posicion = posProductoSugerido();
        system("cls");
        printf("--------------PRODUCTOS SUGERIDOS-----------------");
        printf("\nRellene los campos a continuacion: \n");
        printf("Nombre del producto: ");
        scanf(" %[^\n]", &nombre);
        printf("Precio aproximado: ");
        scanf("%f", &precio);
        registrarProductoSugerido(posicion, nombre, &precio);
        
        break;
        case 4:
        mostrarFactura();
        case 5:
        printf("Saliendo del sistema...");
        return 0;
        break;
        default: 
        printf("Esa no es una opcion valida. Intente de nuevo!\n");
        menu();
        break;
    }
}

