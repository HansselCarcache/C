//Leer un numero y lo va a elevar al cubo.
#include <stdlib.h>
#include <math.h> // Libreria con funciones matematicas

int main(int argc, char const *argv[])
{
    /* Aplicacion credad por: Hanssel Carcache*/
    int num1 = 0;
    int cubo = 0;
    printf("Digite un numero entero: ");
    scanf("%i", &num1);
    cubo = pow(num1 , 3);

    printf("El cubo de %i es %i", num1, cubo);
    sleep(1000);
    return 0;
}
