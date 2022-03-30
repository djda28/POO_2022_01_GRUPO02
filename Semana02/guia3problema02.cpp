#include <iostream>
using namespace std;
int main() {
	//Variables
	int		cantidad;
	float	importeDescuento;
	float	importeCompra;
	float	importePagar;
	char	marca[20];
	//Entrada
	cout << "Ingresar Marca:"; cin >> marca;
	cout << "Ingresar Cantidad:"; cin >> cantidad;
	//Proceso

	//IMPORTE DE LA COMPRA

	if (strcmp(marca, "primor") == 0) 
	{
		importeCompra = 5.99 * cantidad;
	}
	else if (strcmp(marca, "girasol") == 0) 
	{
		importeCompra = 5.50 * cantidad;
	}
	else if (strcmp(marca, "cil") == 0) 
	{
		importeCompra = 4.50 * cantidad;
	}
	else if(strcmp(marca, "cocinero") == 0)
	{
		importeCompra = 4.70 * cantidad;
	}
	else
	{
		cout << "No es ninguna de las opciones correctas!!!";
	}

	//DESCUENTO
	if (cantidad >= 10) {
		importeDescuento = importeCompra * 0.125;
	}
	else if (cantidad >= 7 && cantidad < 10) {
		importeDescuento = importeCompra * 0.10;
	}
	else if (cantidad >= 4 && cantidad < 7) {
		importeDescuento = importeCompra * 0.075;
	}
	else
	{
		importeDescuento = importeCompra * 0.05;
	}

	//IMPORTE A PAGAR
	importePagar = importeCompra - importeDescuento;

	//Salida
	cout << "RESULTADOS DEL PROBLEMA 02\n";
	cout << "Importe de la compra:" << importeCompra << endl;
	cout << "Importe del descuento:" << importeDescuento << endl;
	cout << "Importe a pagar:" << importePagar << endl;
}