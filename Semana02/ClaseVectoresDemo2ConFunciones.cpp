#include<iostream>
using namespace std;
int const CANTIDAD = 5;

void cargarDatosAlArreglo(int nota[])
{
	for (int i = 0; i < CANTIDAD; i++)
	{
		cout << "Ingresar Nota(" << i << "):";
		cin >> nota[i];
	}
}

void listarDatosDelVector(int nota[])
{
	cout << "Listar las notas:\n";
	cout << "*******************\n";
	for (int i = 0; i < CANTIDAD; i++)
	{
		cout << nota[i] << endl;
	}
}

/*Funcion  Maximo de Elementos de un Vector*/

float getPromedio(int n[])
{
	int 	i = 0;
	float 	suma = 0;

	while (i < CANTIDAD)
	{
		suma += n[i];
		++i;
	}
	return suma / i;
}

int main()
{
	//Declaracion de variables
	int nota[20];
	int i;
	//Entrada de Datos
	cargarDatosAlArreglo(nota);
	cout << "\n";
	//Listar los elementos del arreglo
	listarDatosDelVector(nota);
	//Imprimir el promedio
	cout << "El promedio es:" << getPromedio(nota) << endl;
}