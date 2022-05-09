#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    
    int num1, num2 , r;
    printf("Dime un numero: ");
    scanf("%i", &num1);
    
    printf("Dime un numero: ");
    scanf("%i", &num2);

    r = num1 / num2;
    printf("%i / %i = %i", num1, num2, r);

    return 0;
}
