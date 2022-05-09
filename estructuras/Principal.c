#include <stdio.h>


struct Estudiante
{
    int id;
    char nombre[30];
    char apellidos[30];
    float promedio;
}estudiantes[100];



int main(int argc, char const *argv[])
{
    int cant;
    printf("Cuantos estudiantes desea almacenar: ");
    scanf("%i", &cant);
    for(int i =0; i<cant; i++){
        printf("Id: ");
        scanf("%i", &estudiantes[i].id);
        printf("Nombres: ");
        scanf(" %[^\n]", &estudiantes[i].nombre);
        printf("Apellidos: ");
        scanf(" %[^\n]", &estudiantes[i].apellidos);
        printf("Promedio: ");
        scanf("%f", &estudiantes[i].promedio);
    }
    printf("Imprimendo lista \n");
    for(int i =0; i<cant; i++){
        printf("Id: %i\n", estudiantes[i].id);
        printf("Nombres: %s\n", estudiantes[i].nombre);
        printf("Apellidos: %s\n", estudiantes[i].apellidos);
        printf("Promedio: %.2f\n", estudiantes[i].promedio);

    }

    return 0;
}
