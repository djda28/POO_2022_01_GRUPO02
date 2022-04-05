/*
Imprimir 10 veces mi nombre
*/
#include<iostream>
using namespace std;

int main() {
	cout << "Caso 01 \n";
	for (int i = 0; i < 10; i++) 
	{
		cout << "Daniel" << endl;
	}
	cout << "Caso 02 \n";
	/*Imprimir los 20 primeros numeros naturales*/
	for (int i = 1; i <= 20; i++) 
	{
		cout << i << endl;
	}

	/*Ingresar el precio de 5 productos y mostrar la suma total de ellos*/
	/*Mostrar la cantidad de productos registrados*/
	//Declaración de variables
	float suma=0;
	float precio;
	int i;
	int cantidadRegistros;
	//Ingresar la cantidad de precios a sumar
	cout << "Ingresar la cantidad de precios a sumar:";
	cin >> cantidadRegistros;

	for(i = 1; i <= cantidadRegistros; i++)
	{
		//Ingresar el precio por teclado
		cout << "Ingregar el precio del producto:";
		cin >> precio;
		suma += precio;
	}

	/*Imprimir la suma Total*/
	cout << "El Total es:" << suma<<endl;
	cout << "La cantidad de Registros es:" <<cantidadRegistros;

	/*Desarrollar el mismo ejemplo con un While*/
	/*La cantidad de numeros pares que estoy ingresando por teclado*/
	/*  % 
	*/
	i	 = 0;
	suma = 0; 
	cout << "\n C O N  W H I L E\n";
	while(i< cantidadRegistros) 
	{
		cout << "Ingregar el precio del producto:";
		cin >> precio;
		suma += precio;//suma = suma + precio
	
		i++; //i = i + 1
	}
	/*Imprimir la suma Total*/
	cout << "El Total es:" << suma << endl;
	cout << "La cantidad de Registros es:" << cantidadRegistros;

	/*Numeros pares*/
	int numero;
	int item = 0;
	cout << "Ingresar la cantidad de numeros a evaluar:";
	cin >> numero;

	while (item < numero) 
	{
		if (numero % 2 == 0) 
		{
			cout << numero << endl;
		}
		item++;
	}

	/*Imprimir un listado de numeros pares usando
	la sentencia FOR y sin comparación*/
	cout << "\n LISTADO DE PARES\n";
	int itm;
	for (itm = 0; itm < 20; itm+=2) 
	{
		cout << itm << endl;
	}

	/*IMPRIMIR LOS 100 PRIMERO NUMEROS NATURAL PERO
	EN ORDEN DECRECIENTE  
	100
	99
	98
	.
	..
	1
	*/
	cout << "DE 100 a 1\n";
	
	for (i = 100; i > 0; i--) 
	{
		cout << i << " ";
	}

	/*LISTAR LOS NUMEROS MULTIPLOS DE 5 ENTRE EL 30 AL 100*/



}





