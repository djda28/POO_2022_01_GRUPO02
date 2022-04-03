/*
GUIA DE PROBLEMAS 03
PROBLEMA 01
*/
#include <iostream>
using namespace std;
int main() {
	//Declaracion de Variables
	float	promedioPonderado;
	string	categoria;
	//Entrada de datos
	cout << "Ingrese el Promedio Ponderado:";
	cin >> promedioPonderado;
	//Proceso - Algoritmos
	if (promedioPonderado >= 17) 
	{
		categoria = "A";
	}
	else if (promedioPonderado >= 14 && promedioPonderado < 17)
	{
		categoria = "B";
	}
	else if (promedioPonderado >= 12 && promedioPonderado < 14) {
		categoria = "C";
	}
	else
	{
		categoria = "D";
	}
	//Salida de Resultados
	cout << "La Categoria es:" << categoria << endl;

}