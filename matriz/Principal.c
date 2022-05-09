#include <stdio.h>
#define FILAS 10
#define COLUMNAS 10

int main(int argc, char const *argv[])
{
    int f, c;
    int matriz[FILAS][COLUMNAS];
    printf("Cuantas Filas: \n");
    scanf("%d", &f);
    printf("Cuantas columnas: \n");
    scanf("%d", &c);
    printf("Llenar matriz \n");

    for(int i=0;i<f;i++){
        
        for(int j=0;j<c;j++){
            printf("Dame un valor para la celda: %i, %i ", i,j);
        scanf("%d", &matriz[i][j]);
        }
    }
    printf("Mostrando matriz: \n");
    for(int i=0;i<f;i++){
        
        for(int j=0;j<c;j++){
        printf("\t %i \t", matriz[i][j]);

        }
        printf("\n");
    }
    return 0;
}
