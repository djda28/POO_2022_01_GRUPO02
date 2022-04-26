#include<iostream>
#include<vector>
using namespace std;
//Gloabales
vector<int> vectorNota;
//Add - Vector
void addItems(int valor)
{
	vectorNota.push_back(valor);
}

//list of items
void listOfItems()
{
	for (int item : vectorNota)
	{
		cout << item << "\n";
	}
}
//
int main()
{
	//VAriables
	int nota;


	//Adicionar - Nota
	cout << "Ingresar Nota:";
	cin >> nota;

	//Adicionar	- Vector
	addItems(nota);

	//Listar Vector
	listOfItems();
}
