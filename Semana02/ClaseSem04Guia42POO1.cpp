#include<iostream>
using namespace std;
/*Variables Globales*/
int 	cantidadP1, 
		cantidadP2, 
		cantidadP3;
float 	totalP1, 
		totalP2, 
		totalP3;
int		itemP1, 
		itemP2, 
		itemP3;
/*
Identificar los parametros de la funcion
*/
float fImporteDeLaCompra(string producto, int cantidad)
{
	if (producto == "p1")
	{
		return 15 * cantidad;
	}
	else if (producto == "p2")
	{
		return 17.5 * cantidad;
	}
	else if (producto == "p3")
	{
		return 20 * cantidad;
	}
	else
	{
		cout << "Ingresar solamente:p1 - p2 - p3!!!";
	}
}

float fImporteDelDescuento(int cantidad, float importeDeLaCompra)
{
	if (cantidad > 10)
	{
		return 0.15 * importeDeLaCompra;
	}
	else
	{
		return 0.07 * importeDeLaCompra;
	}
}
float fImporteAPagar(
	float importeDeLaCompra,
	float  importeDelDescuento
)
{
	return importeDeLaCompra - importeDelDescuento;
}
/****************************************************************************
	Mostrar el total de descuentos por tipo de producto y
	la cantidad de veces que se compro un tipo de producto
*****************************************************************************/
void efectuarIncrementos(string producto, int cantidad, float importeAPagar)
{
	if (producto == "p1")
	{
		cantidadP1 += cantidad;//cantidadP1 = cantidadP1 + cantidad;
		totalP1 += importeAPagar;
		itemP1++;
	}
	else if (producto == "p2")
	{
		cantidadP2 += cantidad;
		totalP2 += importeAPagar;
		itemP2++;
	}
	else if (producto == "p3")
	{
		cantidadP3 += cantidad;
		totalP3 += importeAPagar;
		itemP3++;
	}
	else
	{
		cout << "Ingresar solamente:p1 - p2 - p3!!!";
	}
}
void imprimirResultados(float importeDeLaCompra, float importeDelDescuento, float importeAPagar)
{
	cout << "Importe de la compra:" << importeDeLaCompra << endl;
	cout << "Importe del descuento:" << importeDelDescuento << endl;
	cout << "Importe a pagar:" << importeAPagar << endl;
}

void reporteDeCierreDeCaja()
{
	cout << "REPORTE DE CIERRE DE CAJA:\n";
	cout << "*************************************\n";
	cout << "Items P1:" << itemP1 << endl;
	cout << "Items P2:" << itemP2 << endl;
	cout << "Items P3:" << itemP3 << endl;
	cout << "Cantidad total de productos P1:" << cantidadP1 << endl;
	cout << "Cantidad total de productos P2:" << cantidadP2 << endl;
	cout << "Cantidad total de productos P3:" << cantidadP3 << endl;
	cout << "Importe Total de productos P1:" << totalP1 << endl;
	cout << "Importe Total de productos P2:" << totalP2 << endl;
	cout << "Importe Total de productos P3:" << totalP3 << endl;

	cout << "*************************************\n";
}
int main()
{
	//Declaracion de variables
	string	producto;
	int 	cantidad;
	float	importeDelDescuento;
	float	importeDeLaCompra;
	float	importeAPagar;
	bool	bandera = false;
	string	respuesta;
	//Entrada
	do
	{
		cout << "Ingresar el codigo del producto:";
		cin >> producto;
		cout << "Ingresar la cantidad:";
		cin >> cantidad;

		//Importe de la compra
		importeDeLaCompra = fImporteDeLaCompra(producto, cantidad);
		//Fin - IC
		//Importe del descuento
		importeDelDescuento = fImporteDelDescuento(cantidad, importeDeLaCompra);
		//Fin - ID
		//Importe a Pagar
		importeAPagar = fImporteAPagar(importeDeLaCompra, importeDelDescuento);
		//Fin - IP
		//Mostrar Resultados
		imprimirResultados(importeDeLaCompra, importeDelDescuento, importeAPagar);
		//Efecturar Incrementos
		efectuarIncrementos(producto, cantidad, importeAPagar);
		cout << "*******************************************************************\n";

		cout << "Deseas ingresar otro producto(SI):";
		cin >> respuesta;

		cout << "*******************************************************************\n";

		cout << "\n";

		if (respuesta == "si")
		{
			bandera = true;
		}
		else
		{
			bandera = false;
		}
	} while(bandera == true);
	//proceso

	//Salida
	reporteDeCierreDeCaja();
}