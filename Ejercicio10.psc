Proceso Ejercicio10
	Definir seleccion Como Entero;
	Definir an Como Entero;
	Definir resultado como Entero;
	Definir residuo como Entero;
	resultado <- 1;
	residuo <-0;
	Definir i Como Entero;
	i<-0;
	Escribir "Escriba su numero n: ";
	Leer seleccion;
	Mientras i<seleccion Hacer
		an<-resultado;
		resultado<- resultado + residuo;
		residuo<- an;
		i<-i+1;
	FinMientras
	Si seleccion=0 Entonces
		resultado<-0;
	
	FinSi
	Escribir "El resultado es: ", resultado;
FinProceso
