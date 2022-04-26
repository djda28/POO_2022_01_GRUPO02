#include<iostream>
#include<vector>
using namespace std;
//Gloabales
//Add - Vector
void addItems(vector<int>& vecNota,
	int 		valor
)
{
	vecNota.push_back(valor);
}

//list of items
void listOfItems(vector<int>& vecNota)
{
	for (int item : vecNota)
	{
		cout << item << "\n";
	}
}
//
int main()
{
	//Variables
	vector<int> vectorNota;
	int nota;
	string rpta;

	do
	{
		//Adicionar - Nota
		cout << "Ingresar Nota:";
		cin >> nota;

		//Adicionar	- Vector
		addItems(vectorNota, nota);

		cout << "Deseas Continuar Ingresando Notas(SI/si):";
		cin >> rpta;
	} while (rpta == "si" || rpta == "SI");
	//Listar Vector
	listOfItems(vectorNota);
}
