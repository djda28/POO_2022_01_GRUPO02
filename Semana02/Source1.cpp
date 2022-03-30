#include <iostream>
using namespace std;
string mensaje() {
	return "Mensaje";
}
void imprimir() {
	string obtenerMensaje = mensaje();
	cout << "Funciones!!!!!:" << obtenerMensaje;
}
int main() {
	imprimir();
}