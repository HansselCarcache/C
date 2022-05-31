Proceso sin_titulo
	Definir opcion Como Entero;
	Definir saldo Como Real;
	Definir saldomin Como Real;
	Definir deposito Como Entero;
	Definir retiro Como Entero;
	opcion <- 0;
	saldo <- 1000;
	saldomin <- 1000;
	deposito <- 0;
	retiro <- 0;
	Escribir "Elija una opcion:";
	Escribir "1-Depositar";
	Escribir "2-Retirar";
	Escribir "3-Imprimir estado de cuenta";
	Leer opcion;
	Si opcion = 1 Entonces
		Escribir "Cuando desea depositar";
		Leer deposito;
		saldo <- saldo + deposito;
		Escribir "El nuevo saldo de la cuenta es:", saldo; 
		
	SiNo
		
	FinSi
	Si opcion = 2 Entonces
		Escribir "Cuando desea retirar";
		Leer retiro;
		saldo <- saldo - deposito;
		Escribir "El nuevo saldo de la cuenta es:", saldo; 
		
	SiNo
		
	FinSi
	
	Si opcion = 3 Entonces
		Escribir "El saldo de la cuenta es: ", saldo;
	FinSi
FinProceso
