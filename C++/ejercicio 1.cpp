
#include<iostream>
using namespace std;


int main() {
	int anio;
	int dias;
	int mes;
	// Declaración de variables
	cout << "Ingrese el mes (1-12): " << endl;
	cin >> mes;
	cout << "Ingrese el año: " << endl;
	cin >> anio;
	switch (mes) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		dias = 31;
		break;
	case 4: case 6: case 9: case 11:
		dias = 30;
		break;
	case 2:
		if (anio%4==0 && (anio%100!=0 || anio%400==0)) {
			dias = 29;
		} else {
			dias = 28;
		}
		break;
	}
	cout << "El mes " << mes << " del año " << anio << " tiene " << dias << " días." << endl;
	return 0;
}

