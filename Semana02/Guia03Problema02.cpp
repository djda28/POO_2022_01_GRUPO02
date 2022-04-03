/*
GUIA 03
PROBLEMA 02
*/
#include<iostream>
using namespace std;
int main() {
	//Declaracion de variables
	char	codigo[20];
	int		cantidadDeLitros;
	float	importeDelDescuento;
	float	importeDeLaCompra;
	float	importeAPagar;
	//Entrada de datos
	cout << "Ingresar el Nombre de la Marca:";
	cin >> codigo;
	cout << "Ingresar la cantidad de Aceite a comprar:";
	cin >> cantidadDeLitros;
	//Procesos - Algoritmos
	//Probando la compracion de cadenas
	cout <<":)"<<strcmp(codigo, "primor");
	cout << "\n";
	if (strcmp(codigo, "primor") == 0) {
		importeDeLaCompra = 5.99 * cantidadDeLitros;
	}
	else if(strcmp(codigo, "girasol") == 0) {
		importeDeLaCompra = 5.50 * cantidadDeLitros;
	}
	else if(strcmp(codigo, "cil") == 0)
	{
		importeDeLaCompra = 4.50 * cantidadDeLitros;
	}
	else if(strcmp(codigo, "cocinero") == 0)
	{
		importeDeLaCompra = 4.70 * cantidadDeLitros;
	}
	else 
	{
		cout << "Lo siento debe ingresar una marca correcta!!!";
	}

	//Descuento
	if (cantidadDeLitros >= 10)
	{
		importeDelDescuento = importeDeLaCompra * 0.125;
	}
	else if (cantidadDeLitros >= 7 && cantidadDeLitros < 10)
	{
		importeDelDescuento = importeDeLaCompra * 0.10;
	}
	else if(cantidadDeLitros>=4 && cantidadDeLitros<7)
	{
		importeDelDescuento = importeDeLaCompra * 0.075;
	}
	else
	{
		importeDelDescuento = importeDeLaCompra * 0.05;
	}

	//Pagar
	importeAPagar = importeDeLaCompra - importeDelDescuento;
		
	//Salida de reusultados

	cout << "El importe de la compra:" << importeDeLaCompra << endl;
	cout << "El importe del descuento:" << importeDelDescuento << endl;
	cout << "El importe a pagar:" << importeAPagar << endl;
}