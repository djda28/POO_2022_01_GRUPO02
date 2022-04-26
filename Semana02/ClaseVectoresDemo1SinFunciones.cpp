#include<iostream>
using namespace std;
int const CANTIDAD = 5;
int main()
{
	//Declaracion de variables
	int nota[20];
	int i;
	//Entrada de Datos
	for (i = 0; i < CANTIDAD; i++)
	{
		cout << "Ingresar Nota(" << i << "):";
		cin >> nota[i];
	}
	cout << "Mostrar El valor segun una posicion:\n";
	cout << nota[0];
	cout << "\n";
	//Listar los elementos del arreglo
	cout << "Listar las notas:\n";
	cout << "*******************\n";
	for (i = 0; i < CANTIDAD; i++)
	{
		cout << nota[i] << endl;
	}
}