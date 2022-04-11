#include<iostream>
using namespace std;
/*
*
Ingresar un numero y calcular el factorial de esos numeros

4! = 4 * 3 *2 * 1
*/
int main()
{
	//Declaracion de Variables
	int fact;
	int i;
	int numero;
	//Entrada de Datos
	cout << "Ingresar el numero a evaluar:";
	cin >> numero;
	//Inicializar las variables
	fact = 1;
	//Algoritmo
	cout << "El factorial de (" << numero << ") es";
	for (i = 1; i <= numero; i++)
	{
		fact *= i;
	}
	//Salida
	cout << " "<<fact;

}