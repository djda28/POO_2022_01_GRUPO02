#include<iostream>
using namespace std;
/*
* 
Ingresar 10 numeros por teclado y mostrar una lista de divisores de los
numeros

Programa ingrese un número por teclado y liste todos los divisores del
numero
Cantidad de Divisores
Suma de Dividores
*/
int main()
{
	//Declaracion de Variables
	int numero;
	int i;
	int cantidad = 0;
	int suma = 0;
	//Entrada Datos
	

	cout << "Ingresar Numero a Evaluar:";
	cin >> numero;

	//proceso - algoritmo
	cout << "Los Divisores del numero(" << numero << ") son:\n";
	cout << "****************************************************\n";
	for (i = 1; i <= numero; i++)
	{
		if (numero % i == 0)
		{
			cout << i << endl;
			++cantidad;//cantidad = cantidad + 1
			suma += i;//suma = suma + i
		}
	}
	cout << "****************************************************\n";
	//Salida
	cout << "La cantidad de divisores:" << cantidad << endl;
	cout << "La suma es:" << suma << endl;

}