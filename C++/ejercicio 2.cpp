#include<iostream>

using namespace std;

int main() {
	int calidad;
	float const_precio1_calidad1;
	float const_precio1_calidad2;
	float const_precio1_calidad3;
	float const_precio2_calidad1;
	float const_precio2_calidad2;
	float const_precio2_calidad3;
	float const_precio3_calidad1;
	float const_precio3_calidad2;
	float const_precio3_calidad3;
	int precio;
	int producto;
	const_precio1_calidad1 = 5000;
	const_precio1_calidad2 = 4500;
	const_precio1_calidad3 = 4000;
	const_precio2_calidad1 = 4500;
	const_precio2_calidad2 = 4000;
	const_precio2_calidad3 = 3500;
	const_precio3_calidad1 = 4000;
	const_precio3_calidad2 = 3500;
	const_precio3_calidad3 = 3000;
	cout << "Ingrese el número del producto (1, 2 o 3):" << endl;
	cin >> producto;
	cout << "Ingrese la calidad del producto (1, 2 o 3):" << endl;
	cin >> calidad;
	if (producto==1) {
		while (calidad<1 || calidad>3) {
			cout << "calidad no valida, ingrese 1, 2 o 3" << endl;
			cin >> calidad;
		}
		if (calidad==1) {
			precio = const_precio1_calidad1;
		} else {
			if (calidad==2) {
				precio = const_precio1_calidad2;
			} else {
				precio = const_precio1_calidad3;
			}
		}
	} else {
		if (producto==2) {
			while (calidad<1 || calidad>3) {
				cout << "calidad no valida, ingrese 1, 2 o 3" << endl;
				cin >> calidad;
			}
			if (calidad==1) {
				precio = const_precio2_calidad1;
			} else {
				if (calidad==2) {
					precio = const_precio2_calidad2;
				} else {
					precio = const_precio2_calidad3;
				}
			}
		} else {
			if (producto==3) {
				while (calidad<1 || calidad>3) {
					cout << "calidad no valida, ingrese 1, 2 o 3" << endl;
					cin >> calidad;
				}
				if (calidad==3) {
					precio = const_precio3_calidad1;
				} else {
					if (calidad==2) {
						precio = const_precio3_calidad2;
					} else {
						precio = const_precio3_calidad3;
					}
				}
			}
		}
	}
	cout << "el precio del producto es " << producto << " de calidad " << calidad << " es de precio " << precio << endl;
	return 0;
}

