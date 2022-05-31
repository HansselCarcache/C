int numero;
void calcularFactorial(int numero){
    
    
    int i=numero-1;
   
    while (i>0)
    {
         numero= numero*i;
         i--;
    }
   printf("El factorial del numero es: %d", numero);
}