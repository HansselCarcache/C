int NNumeros[19]= {2,4,3,5,10,25,23,50,60,122,25,125,20,23,50,212,256,245,126,24};
void MayorNNumeros(int *numeros[20]) {
   
     int len=sizeof(NNumeros)/sizeof(int);
     int mayor = NNumeros[0];
   for(int i = 0; i<=len;i++){
       if(mayor < NNumeros[i]){
           mayor = NNumeros[i];
       }
   }
   printf("El numero mayor del arreglo es: %d", mayor);
}