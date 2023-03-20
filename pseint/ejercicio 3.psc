Algoritmo sin_titulo
	Definir dia, mes, anio, sigDia, sigMes, sigAnio Como Entero
	
    Escribir "Ingrese el día: "
    Leer dia
    Escribir "Ingrese el mes: "
    Leer mes
    Escribir "Ingrese el año: "
    Leer anio
    Si dia < 1 O dia > 31 O mes < 1 O mes > 12 Entonces
        Escribir "La fecha ingresada no es válida."
    Sino
        Si (anio % 4 = 0 Y anio % 100 <> 0) O anio % 400 = 0 Entonces
            bisiesto <- Verdadero
        Sino
            bisiesto <- Falso
        FinSi
        segun mes Hacer
            caso 2:
                si bisiesto Entonces
                    si dia < 29 Entonces
                        sigDia <- dia + 1
                        sigMes <- mes
                        sigAnio <- anio
                    sino
                        sigDia <- 1
                        sigMes <- mes + 1
                        sigAnio <- anio
                    FinSi
                sino
                    si dia < 28 Entonces
                        sigDia <- dia + 1
                        sigMes <- mes
                        sigAnio <- anio
                    sino
                        sigDia <- 1
                        sigMes <- mes + 1
                        sigAnio <- anio
                    FinSi
                FinSi
            caso 4, 6, 9, 11:
                si dia < 30 Entonces
                    sigDia <- dia + 1
                    sigMes <- mes
                    sigAnio <- anio
                sino
                    sigDia <- 1
                    sigMes <- mes + 1
                    sigAnio <- anio
                FinSi
            caso 1, 3, 5, 7, 8, 10, 12:
                si dia < 31 Entonces
                    sigDia <- dia + 1
                    sigMes <- mes
                    sigAnio <- anio
                sino
                    si mes = 12 Entonces
                        sigDia <- 1
                        sigMes <- 1
                        sigAnio <- anio + 1
                    sino
                        sigDia <- 1
                        sigMes <- mes + 1
                        sigAnio <- anio
                    FinSi
                FinSi
        FinSegun
    FinSi
	Escribir "La fecha del siguiente día es: ", sigDia, "/", sigMes, "/", sigAnio
FinAlgoritmo
