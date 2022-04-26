#include<iostream>
#include<vector>
using namespace std;
int main()
{
	//Crear Vector
	vector<int> vectorNota;
	int			nota;
	string		rpta;
	//Insertar Registros
	int cantidad = 0;
	do
	{
		cout << "Ingresar Nota:";
		cin >> nota;
		vectorNota.push_back(nota);//Insertar elemento al vector(contenedor)

		cout << "Deseas Continuar Ingresando Notas(SI/si):";
		cin >> rpta;
	} while (rpta == "si" || rpta == "SI");
	//Listar Todos los Registros
	//Primera Forma
	cout << "Primera Forma****\n";
	for (int item : vectorNota)
	{
		cout << item << "\n";
	}
	//Eliminar un elemento
	vectorNota.erase(vectorNota.begin() + 0);
	//erase(str_vec, str_vec[0]); //elimina el primero

	//Segunda Forma
	cout << "Segunda Forma****\n";
	for (int i = 0; i < vectorNota.size(); i++)
	{
		cout << vectorNota[i] << "\n";
	}
}