Algoritmo sin_titulo
	// Declaraci�n de variables
	Definir mes,dias,anio Como Entero
	Escribir "Ingrese el mes (1-12): "
	Leer mes
	Escribir "Ingrese el a�o: "
	Leer anio
	
	Segun mes Hacer
		Caso 1, 3, 5, 7, 8, 10, 12:
			dias <- 31
		Caso 4, 6, 9, 11:
			dias <- 30
		Caso 2:
			Si anio % 4 = 0 Y (anio % 100 <> 0 O anio % 400 = 0) Entonces
				dias=29
			Sino
				dias=28
			FinSi
	FinSegun
	Escribir "El mes ", mes, " del a�o ", anio, " tiene ", dias, " d�as."
FinAlgoritmo
