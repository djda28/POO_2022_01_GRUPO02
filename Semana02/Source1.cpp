#include <iostream>
using namespace std;
//using std::string;
string mensaje() {
	return "Mensaje";
}
void imprimir() {
	string obtenerMensaje = mensaje();
	cout << "Funciones!!!!!:"<< obtenerMensaje;
}
int main() {
	char codigo[20];
	cout << "Ingrese el tipo de aceite:"; cin >> codigo;
	if (strcmp(codigo, "primor") == 0)
		cout << "Son iguales";
	imprimir();

}