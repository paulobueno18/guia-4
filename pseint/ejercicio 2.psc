Algoritmo sin_titulo
	const_precio1_calidad1 = 5000
	const_precio1_calidad2 = 4500
	const_precio1_calidad3 = 4000
	const_precio2_calidad1 = 4500
	const_precio2_calidad2 = 4000
	const_precio2_calidad3 = 3500
	const_precio3_calidad1 = 4000
	const_precio3_calidad2 = 3500
	const_precio3_calidad3 = 3000
	definir producto como entero
	definir calidad como entero
	definir precio como entero
	escribir "Ingrese el número del producto (1, 2 o 3):"
	leer producto
	escribir "Ingrese la calidad del producto (1, 2 o 3):"
	leer calidad
	Si producto==1 Entonces
		mientras calidad < 1 o calidad > 3 hacer
			Escribir "calidad no valida, ingrese 1, 2 o 3"
			Leer calidad
		FinMientras
		Si calidad==1 Entonces
			precio = const_precio1_calidad1
		SiNo
			Si calidad==2 Entonces
				precio = const_precio1_calidad2
			SiNo
				precio = const_precio1_calidad3
			Fin Si
		Fin Si
	SiNo
		Si producto==2 Entonces
			mientras calidad < 1 o calidad > 3 hacer
				Escribir "calidad no valida, ingrese 1, 2 o 3"
				Leer calidad
			FinMientras
			Si calidad==1 Entonces
				precio = const_precio2_calidad1
			SiNo
				Si calidad==2 Entonces
					precio = const_precio2_calidad2
				SiNo
					precio = const_precio2_calidad3
				Fin Si
			Fin Si
		SiNo
			Si producto==3 Entonces
				mientras calidad < 1 o calidad > 3 hacer
					Escribir "calidad no valida, ingrese 1, 2 o 3"
					Leer calidad
				FinMientras
				Si calidad==3 Entonces
					precio = const_precio3_calidad1
				SiNo
					Si calidad==2 Entonces
						precio = const_precio3_calidad2
					SiNo
						precio = const_precio3_calidad3
					Fin Si
				Fin Si
			Fin Si
		Fin Si
	Fin Si
	Escribir "el precio del producto es ", producto ," de calidad ", calidad , " es de precio ", precio
FinAlgoritmo
