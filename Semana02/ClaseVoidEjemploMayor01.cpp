#include<iostream>
using namespace std;
//Globales
int n1, n2, n3, mayor;
//Funciones y Procedimientos
void entrada()
{
	cin >> n1;
	cin >> n2;
	cin >> n3;
}

void encontrarElMayor()
{
	if (n1 > n2 && n1 > n3)
	{
		mayor = n1;
	}
	else if (n2 > n1 && n2 > n3)
	{
		mayor = n2;
	}
	else
	{
		mayor = n3;
	}
}

void salida()
{
	cout << "El mayor es:" << mayor << endl;
}

int main()
{
	//Entrada
	entrada();
	//Proceso
	encontrarElMayor();
	//Salida
	salida();
}