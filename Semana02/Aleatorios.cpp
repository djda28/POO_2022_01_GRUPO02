#include<iostream>
#include <cstdlib>
#include <string>
#include <iomanip> //Libreria para usar setprecision

using namespace std;
using std::string;

using std::fixed;
using std::setprecision;
/**
Todos los casos:
variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
*/
int main() {
	int valor;
	int valor2;
	int i;

	cout << "maximo:" << RAND_MAX;
	cout << "\nOTRA";


	i = 0;
	while (i < 10) {
		valor2 = 850 + rand() % (3150 + 1 - 850);
		cout << valor2 << endl;
		i++;
	}

	cout << "Con J++";
	int j = 0;
	do {
		valor2 = 850 + rand() % (3150 + 1 - 850);
		cout << valor2 << endl;
		j++;
	} while (j < 10);

	cout << "Fin de J";
	for (i = 0; i < 10; i++) {
		valor = rand() % 10;
		cout << valor << "\n";
	}
	valor = rand() % 1500;    // Obtiene un número entre 0 y 1499
	valor = rand() % 65536;  // Obtiene un número entre 0 y 65535, por ejemplo, 		  para elegir un puerto TCP/IP al azar
	valor = 10 + rand();		// Genera números aleatorios a partir del 10
	valor = 65 + rand();		// Genera números aleatorios a partir del 65

	int cantidadHoras, horasExtras;
	float sueldo;

	for (int i = 0; i < 3; i++)
	{
		cout << "Ingresar Cantidad de Horas:"; cin >> cantidadHoras;
		if (cantidadHoras <= 40)
		{
			sueldo = 20 * cantidadHoras;
		}
		else
		{
			horasExtras = cantidadHoras - 40;
			sueldo = (20 * 40) + (horasExtras * 25);
		}
		cout << "El sueldo es:" + std::to_string(sueldo);
		cout << "El sueldo es 2:" << setprecision(2) << fixed << sueldo << endl;
	}
}