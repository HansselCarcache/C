#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int seleccion;
    int an;
    int resultado = 1;
    int residuo = 0;
    printf("Escriba su numero n: ");
    scanf("%d", &seleccion);
    //resultado = a1 + a2 + seleccion;
    for(int i=0; i<seleccion; i++){
        an = resultado;
       // printf("resultado: %d\n", resultado);
        
       // printf("residuo antes de la operacion: %d\n", residuo);
        
        resultado= resultado + residuo;
        residuo = an;
        
        //printf("residuo: %d\n\n", residuo);

        
        
    }
    if(seleccion == 0){
        resultado = 0;
    }
    printf("El resultado es: %d", resultado);
    return 0;
}
