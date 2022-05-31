int nNotas = 0;
void calcularPromedio(int nNotas){

   float nota;
   float sumaNota=0;
   int cuenta= 1;  
   float promedio=0;
     do {
         printf("Ingrese la nota %d: ", cuenta);
         scanf("%f", &nota);
         sumaNota = sumaNota + nota;
         cuenta++;
     } while (cuenta <= nNotas);
     promedio = sumaNota/nNotas;
     //printf("%0.2f", sumaNota);
     printf("El promedio es: %0.2f", promedio);
}
     
     