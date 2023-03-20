#include<iostream>
using namespace std;
int main() {
	int anio;
	int contrario;
	int dia;
	int diadelanio;
	int i;
	int mes;
	cout << "Ingrese una fecha en formato dd/mm/aaaa:" << endl;
	cin >> dia >> mes >> anio;
	if ((dia<1 || mes<1 || mes>12 || anio<1)) {
		cout << "La fecha ingresada no es válida." << endl;
	} else {
		diadelanio = dia;
		i = 1;
		while ((i<mes)) {
			switch (i) {
			case 2:
				if ((anio%4==0 && anio%100!=0 || anio%400==0)) {
					diadelanio = diadelanio+29;
				} else {
					diadelanio = diadelanio+28;
				}
				break;
			case 4: case 6: case 9: case 11:
				diadelanio = diadelanio+30;
				break;
			default:
				diadelanio = diadelanio+31;
				break;
			}
			i = i+1;
		}
	}
	cout << "El día " << dia << "/" << mes << "/" << anio << " es el día " << diadelanio << " del año " << anio << "." << endl;
	return 0;
}

