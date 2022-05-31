#include <stdio.h>
#include<conio.h>
int opcion = 0;
float saldoInicial = 500;
char telefono[20];
int minutos = 0;
float costoLlamada = 0;
float recarga = 0;
int main(int argc, char const *argv[])
{
    
    menu();
    return 0;
}
void menu(){
printf("Elija una opcion\n");
    printf("1-Registrar Llamada\n");
    printf("2-Recargar Saldo\n");
    printf("3-Imprimir Saldo\n");
    scanf("%d", &opcion);
    opciones(opcion);
    
}

void opciones(int opcion){
    
    switch(opcion){
        case 1:
        system("cls");
         printf("Escriba su numero de telefono:\n ");
        scanf("%s", &telefono);
        printf("Cuanto minutos duro la llamada:\n ");
        scanf("%d", &minutos);
        costoLlamada = 5 * minutos;
        
        verificarSaldo(&saldoInicial, &costoLlamada);
       
        break;
        case 2:
        system("cls");
        printf("Escriba su numero de telefono:\n ");
        scanf("%s", &telefono);
        printf("Cuanto desea recargar:\n ");
        scanf("%f", &recarga);
        recargarSaldo(&telefono, &recarga);
        break;
        case 3:
        system("cls");
        printf("Escriba su numero de telefono:\n ");
        scanf("%s", &telefono);
        imprimirSaldo(&telefono, &saldoInicial);
        break;
        default: return 0;
        break;
    }
}
void registrarLlamada(char *telefono, float *saldo, int *minutos){
        system("cls");
            
            saldoInicial = saldoInicial - costoLlamada;
            printf("La llamada fue exitosa!\n");
            printf("Su saldo es de: %0.2f", saldoInicial);
        
        
        printf("\nPresione 1 para regresar o cualquier tecla para salir del sistema.\n");
        scanf("%d", &opcion);
        switch(opcion){
            case 1:
            system("cls");
            menu();
            break;
            default: return 0;
            break;
        }
}

void recargarSaldo(char *numero, float *recarga){
        system("cls");
        printf("Su número es: %s\n", numero);
        saldoInicial= saldoInicial + *recarga;
        printf("Su saldo es de: %0.2f\n", saldoInicial);
        printf("\nPresione 1 para regresar o cualquier tecla para salir del sistema.\n");
        scanf("%d", &opcion);
        switch(opcion){
            case 1:
            system("cls");
            menu();
            break;
            default: return 0;
            break;
        }
}
void verificarSaldo(float *saldo, float *costo){
    
    
    if(*costo > *saldo){
        printf("No tiene saldo suficiente para realizar la llamada\n");
        printf("\nPresione 1 para regresar o cualquier tecla para salir del sistema.\n");
        scanf("%d", &opcion);
        switch(opcion){
            case 1:
            system("cls");
            menu();
            break;
            default: return 0;
            break;
        }
        
    }else{
        registrarLlamada(&telefono, &saldoInicial, &minutos);
       
    }
    
   
   
}

void imprimirSaldo(char *numero, float *saldo){
        system("cls");
        printf("Su numero es : %s\n", numero);
        printf("Su saldo es de: %0.2f\n", saldoInicial);
        printf("\nPresione 1 para regresar o cualquier tecla para salir del sistema.\n");
        scanf("%d", &opcion);
        switch(opcion){
            case 1:
            system("cls");
            menu();
            break;
            default: return 0;
            break;
        }
}
