#include <iostream>
using namespace std;

float Luaspersegipanjang(float p, float l) {
	return p * l;
}

float Luassegitiga(float a, float t) {
	return 0.5 * a * t;
}

float Luaslingkaran(float r) {
	return 3.14 * r * r;
}


int main() {

	float panjang, lebar, tinggi, jejari, alas;
	int pilihan;


	cout << "===================" << endl;
	cout << "======M E N U======" << endl;
	cout << "===================" << endl;

	cout << "1. Luas Persegipanjang" << endl;
	cout << "2. Luas Segitiga" << endl; 
	cout << "3. Luas Lingkaran" << endl;
	cout << "4. Exit" << endl;

	cout << "Masukan pilihan : ";
	cin >> pilihan;


	system("cls");

	do
	{


		switch (pilihan)
		{
		case 1:
			cout << "Masukan Panjang : ";
			cin >> panjang;
			cout << "Masukan Lebar : ";
			cin >> lebar;
			cout << "Luas persegipanjang = " << Luaspersegipanjang(panjang, lebar);
			break;

		case 2:
			cout << "Masukan alas : ";
			cin >> alas;
			cout << "Masukan tinggi :";
			cin >> tinggi;
			cout << "Luas Segitiga = " << Luassegitiga(alas, tinggi);

		}
	}

		
	
}