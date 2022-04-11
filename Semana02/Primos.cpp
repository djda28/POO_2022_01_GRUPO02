#include<iostream>
using namespace std;
/*
*
Ingresar un numero por teclado y mostrar un mensaje si este es primo
o NO
*/
int main()
{
	//Declaracion de Variables
	int numero;
	int i;
	int cantidad = 0;
	//Entrada Datos


	cout << "Ingresar Numero a Evaluar:";
	cin >> numero;

	//proceso - algoritmo
	for (i = 1; i <= numero; i++)
	{
		if (numero % i == 0)
		{
			++cantidad;//cantidad = cantidad + 1
		}
	}
	//Salida
	if (cantidad == 2)
	{
		cout<<"El numero es primo";
	}
	else
	{
		cout << "El numero no es primo("<<cantidad<<")";
	}
}