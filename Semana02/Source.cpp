#include <iostream>
using namespace std;
/*
GUIA DE PROBLEMAS SEMANA 01 - GUIA 02
PROBLEMA 01
*/
int main() {
	//Declarar variables
	float	precioUnitario;
	int		cantidad;
	float	importeCompra;
	float	importeDescuento;
	float	importePagar;
	//Entrada de datos
	cout << "Ingresar Precio Unitario:";cin >> precioUnitario;
	cout << "Ingresar la Cantidad:"; cin >> cantidad;
	//proceso - algoritmos
	importeCompra	 =	precioUnitario * cantidad;
	importeDescuento = importeCompra * 0.15;
	importePagar = importeCompra - importeDescuento;
	//Salida de resultados
	cout << "Importe de Compra:" << importeCompra << endl;
	cout << "Importe del Descuento:" << importeDescuento << endl;
	cout << "Importe a Pagar:" << importePagar;
}