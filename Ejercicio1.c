#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3) {
        if (num2 > num3){
        printf("%d \n", num1);
        printf("%d \n", num2);
        printf("%d", num3);
        } 
        else{
            printf("%d \n", num1);
            printf("%d \n", num3);
            printf("%d", num2);
        }
    }
    else if(num2 > num1 && num2> num3){
        if(num1 > num3){
        printf("%d \n", num2);
        printf("%d \n", num1);
        printf("%d", num3);
        }
        else{
            printf("%d \n", num2);
            printf("%d \n", num3);
            printf("%d", num1);
        }
    } 
    else if(num3 > num1 && num3 > num2) {
        if(num1 > num2){       
        printf("%d \n", num3);
        printf("%d \n", num1);
        printf("%d", num2);
        }
        else{
            printf("%d \n", num3);
            printf("%d \n", num2);
            printf("%d", num1);
        }

    }



    return 0;
}
