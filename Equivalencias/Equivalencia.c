#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float cantByte;
    float eqKB;
    float eqMB;
    float eqGB;
    float eqTB;
    float eqPB;
    float eqEB;
    float eqZB;
    float eqYB;

    printf("Dime la cantidad de Byte a convertir: ");
    scanf("%f", &cantByte);
    printf("Por favor espere mientras convertimos a sus equivalentes... ");
    sleep(5);
    system("cls");
    
    eqKB = cantByte/1024;
    eqMB = eqKB/1024;
    eqGB = eqMB/1024;
    eqTB = eqGB/1024;
    eqPB = eqTB/1024;
    eqEB = eqPB/1024;
    eqZB = eqEB/1024;
    eqYB = eqZB/1024;

    printf("%.2f bytes equivalen a: \n", cantByte);
    printf("KB: %.2f KB\n", eqKB);
    printf("MB: %.2f MB\n", eqMB);
    printf("GB: %.2f GB\n", eqGB);
    printf("TB: %.2f TB\n", eqTB);
    printf("PB: %.2f PB\n", eqPB);
    printf("EB: %.2f EB\n", eqEB);
    printf("ZB: %.2f ZB\n", eqZB);
    printf("YB: %.2f TB\n", eqYB);
    
    return 0;
}
