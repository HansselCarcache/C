#include <stdio.h>
#include<conio.h>
int opcion = 0;
float saldo = 1000;
float saldomin = 1000;
float deposito = 0;
float retiro = 0;
int main(int argc, char const *argv[])
{
    
    menu();
    return 0;
}
void menu(){
printf("Elija una opcion\n");
    printf("1-Depositar\n");
    printf("2-Retirar\n");
    printf("3-Imprimir estado de cuenta\n");
    scanf("%d", &opcion);
    opciones(opcion);
    
}

void opciones(int opcion){
    
    switch(opcion){
        case 1:
        depositar();
        break;
        case 2:
        retirar();
        break;
        case 3:
        estadocuenta();
        break;
        default: return 0;
        break;
    }
}
void depositar(){
        system("cls");
        printf("Su saldo actual es de: %0.2f\n", saldo);
        printf("Cuanto desea depositar: ");
        scanf("%f", &deposito);
        saldo = saldo + deposito;
        printf("El nuevo saldo de la cuenta es: %0.2f\n", saldo);
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

void retirar(){
        system("cls");
        printf("Su saldo es de: %0.2f\n", saldo);
        printf("Cuanto desea retirar de su cuenta: ");
        scanf("%f", &retiro);
        validar();
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
void validar(){
    
    
    if(retiro > saldo){
        printf("La cuenta no tiene saldo suficiente para realizar el retiro\n");
        
    }else{
        saldo = saldo - retiro;
        printf("La cuenta tiene saldo suficiente para realizar el retiro\n");
        printf("El nuevo saldo de la cuenta es: %0.2f\n", saldo);
    }
    
    if(saldo < saldomin ){
        
        printf("La cuenta tiene saldo suficiente para realizar el retiro, pero queda por debajo del saldo minimo\n");
        printf("Se le aplicara una multa de 100C$ sobre su saldo\n");
        saldo = saldo - 100;
        printf("El nuevo saldo de la cuenta es: %0.2f\n", saldo);
    }
   
}

void estadocuenta(){
        system("cls");
        printf("Su saldo es de: %0.2f\n", saldo);
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
