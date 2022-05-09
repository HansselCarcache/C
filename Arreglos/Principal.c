#include <stdio.h>
#define TAM 100

int main(int argc, char const *argv[])
{
    int edades[TAM];
    int cant;
    printf("Cuantas edades: ");
    scanf("%d", &cant);
    for(int i=0; i<cant;i++){
        printf("Ingresa la edad: ");
        scanf("%d", &edades[i]);
    }

    for(int i=0; i<cant; i++){
        printf("La edad %d es: %i \n", i+1,edades[i]);
    }
    return 0;
}
