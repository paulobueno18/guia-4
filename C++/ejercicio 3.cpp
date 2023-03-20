#include <iostream>

using namespace std;

int main() {
    int dia, mes, anio, sigDia, sigMes, sigAnio;
    bool bisiesto;

    cout << "Ingrese el día: ";
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el año: ";
    cin >> anio;

    // Verificar si la fecha ingresada es válida
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12) {
        cout << "La fecha ingresada no es válida." << endl;
    } else {
        // Verificar si el año es bisiesto
        if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
            bisiesto = true;
        } else {
            bisiesto = false;
        }

        // Determinar el día siguiente
        switch (mes) {
            case 2:
                if (bisiesto) {
                    if (dia < 29) {
                        sigDia = dia + 1;
                        sigMes = mes;
                        sigAnio = anio;
                    } else {
                        sigDia = 1;
                        sigMes = mes + 1;
                        sigAnio = anio;
                    }
                } else {
                    if (dia < 28) {
                        sigDia = dia + 1;
                        sigMes = mes;
                        sigAnio = anio;
                    } else {
                        sigDia = 1;
                        sigMes = mes + 1;
                        sigAnio = anio;
                    }
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (dia < 30) {
                    sigDia = dia + 1;
                    sigMes = mes;
                    sigAnio = anio;
                } else {
                    sigDia = 1;
                    sigMes = mes + 1;
                    sigAnio = anio;
                }
                break;
            default:
                if (dia < 31) {
                    sigDia = dia + 1;
                    sigMes = mes;
                    sigAnio = anio;
                } else {
                    if (mes == 12) {
                        sigDia = 1;
                        sigMes = 1;
                        sigAnio = anio + 1;
                    } else {
                        sigDia = 1;
                        sigMes = mes + 1;
                        sigAnio = anio;
                    }
                }
                break;
        }

        // Mostrar la fecha del siguiente día
        cout << "La fecha del siguiente día es: " << sigDia << "/" << sigMes << "/" << sigAnio << endl;
    }

    return 0;
}
