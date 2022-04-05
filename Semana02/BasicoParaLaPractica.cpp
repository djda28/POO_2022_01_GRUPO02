#include<iostream>
using namespace std;
int main() 
{
	/* Ingresar N notas por teclado, si la nota esta entre 0 - 10
	el promedio de notas que se encuentran en ese rango*/

	int nota;
	int cantidad;
	int contador010 = 0, contador1114 = 0, contador1520 = 0;
	int suma010 = 0, suma1114 = 0, suma1520 = 0;
	int promedio010 = 0, promedio1114 = 0, promedio1520 = 0;

	cout<<"Ingresar la cantidad de notas:";
	cin >> cantidad;

	for (int i = 0; i < cantidad; i++) //O(n) 
	{
		cout << "Ingresar Nota["<<i<<"]:";
		cin >> nota;

		if (nota >= 0 && nota <= 10)
		{
			++contador010;//contador010=contador010 + 1
			suma010 += nota;
		}
		else if (nota >= 11 && nota <= 14)
		{
			++contador1114;
			suma1114 += nota;
		}
		else if(nota >= 15 && nota <= 20)
		{
			++contador1520;
			suma1520 += nota;
		}
		else {
			cout << "No es una nota correcta!!!";
		}

	}
	//Calcular el promedio de notas de 0 - 10
	if (contador010 > 0)
	{
		promedio010 = suma010 / contador010;
	}
	if (contador1114 > 0)
	{
		promedio1114 = suma1114 / contador1114;
	}
	if (contador1520 > 0)
	{
		promedio1520 = suma1520 / contador1520;
	}
	//Impresion de Resultados
	cout << "La cantidad de Notas entre 0 a 10:" << contador010 << endl;
	cout << "El promedio de notas entre 0 a 10:" << promedio010 << endl;
	cout << "La cantidad de Notas entre 11 a 14:" << contador1114 << endl;
	cout << "El promedio de notas entre 11 a 14:" << promedio1114 << endl;
	cout << "La cantidad de Notas entre 15 a 20:" << contador1520 << endl;
	cout << "El promedio de notas entre 15 a 20:" << promedio1520 << endl;
}