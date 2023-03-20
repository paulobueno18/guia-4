Algoritmo sin_titulo
	Definir dia, mes, anio, diaDelAnio Como Entero
	Escribir "Ingrese una fecha en formato dd/mm/aaaa:"
	Leer dia, mes, anio
	Si (dia < 1 O mes < 1 O mes > 12 O anio < 1) Entonces
		Escribir "La fecha ingresada no es válida."
	Sino
		diaDelAnio = dia
		i = 1
		Mientras (i < mes) Hacer
			Segun i Hacer
				Caso 2:
					Si (anio % 4 = 0 Y anio % 100 <> 0 O anio % 400 = 0) Entonces
						diaDelAnio = diaDelAnio + 29
					Sino
						diaDelAnio = diaDelAnio + 28
					FinSi
				Caso 4, 6, 9, 11:
						diaDelAnio = diaDelAnio + 30
				Caso Contrario:
					diaDelAnio = diaDelAnio + 31
			FinSegun
			i = i + 1
		FinMientras
	FinSi
	Escribir "El día ", dia, "/", mes, "/", anio, " es el día ", diaDelAnio, " del año ", anio, "."

FinAlgoritmo
