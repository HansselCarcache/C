#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void EvaluarEdadJubilacion(int edad, char const * sexo){
    
    if(strcmp(sexo, "Hombre")==0 && edad>60 || strcmp(sexo, "Mujer")==0 && edad>55 ){
        printf("Se puede jubilar");
    }else{
        printf("No se puede jubilar");
    }
}

int main(int argc, char const *argv[])
{
    int edad = 0;
    char sexo[20];

    printf("Digite su edad:");
    scanf("%i", &edad);
    printf("Digite su sexo:");
    scanf("%s", &sexo);

   
    
    EvaluarEdadJubilacion(&edad, &sexo);
    return 0;
}
