SubProceso imprimirSaldo ( telefono, saldo )
	Escribir "Su telefono es: ", telefono;
	Escribir "Su saldo es de: ", saldo;
	
FinSubProceso

SubProceso registrarLlamada ( telefono, saldo)
	Definir saldoInicial Como Real;
	saldoInicial <-500;
	saldoInicial<- saldoInicial-saldo;
	Escribir "Su saldo es de : ", saldoInicial;
FinSubProceso

SubProceso verificarSaldo(saldo, costo)
	Definir telefono Como Caracter;
	Definir minutos Como Entero;
	Escribir "Escriba su numero de telefono";
	Leer telefono;
	Si costo>saldo Entonces
		Escribir "No tiene saldo suficiente para realizar la llamada";
		
	SiNo
		registrarLlamada(telefono, costo);
	FinSi
FinSubProceso

SubProceso recargarSaldo(number, recarga)
	
	Definir saldoInicial Como Real;
	saldoInicial<-500;
	Escribir "Su numero es: ", number;
	saldoInicial <- saldoInicial + recarga;
	Escribir "Su saldo es de ", saldoInicial;
	
FinSubProceso

SubProceso opciones( opcion )
	Definir saldoInicial Como Real;
	saldoInicial <-500;
	Definir telefono Como Caracter;
	Definir minutos Como Entero;
	Definir costoLlamada Como Real;
	Definir recarga Como Real;
	Si opcion=1 Entonces
		Escribir "Cuantos minutos duro la llamada";
		Leer minutos;
		costoLlamada<-5*minutos;
		verificarSaldo(saldoInicial, costoLlamada);
	SiNo
		
	FinSi
	Si opcion =2 Entonces
		Limpiar Pantalla;
		Escribir "Escriba su numero de telefono";
		Leer telefono;
		Escribir "Cuantos desea recargar";
		Leer recarga;
		recargarSaldo(telefono, recarga);
	FinSi
	
	Si opcion = 3 Entonces
		Limpiar Pantalla;
		Escribir "Escriba su numero de telefono";
		Leer telefono;
		imprimirSaldo(telefono, saldoInicial);
	FinSi
FinSubProceso

SubProceso Menu()
	Definir opcion Como Entero;
	Escribir "Elija una opcion";
	Escribir "1-Registrar Llamada";
	Escribir "2-Recargar Saldo";
	Escribir "3-Imprimir Saldo";
	Leer opcion;
	opciones(opcion);
FinSubProceso



Proceso llamadas
	
	Definir saldoInicial Como Real;
	saldoInicial <-500;
	Menu();
	
FinProceso
