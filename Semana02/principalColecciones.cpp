#include"alumnoVector.h"
#include<iostream>
#include<vector>
using namespace std;
AlumnoVector alumnoVector;
void 		menuDeOpciones();
void adicionarPersonas();
void eliminar();
void listOfItems();
void modificar();
void buscar();

void menuDeOpciones() {
	int opt;
	do {
		cout << "MENU DE OPCIONES:\n";
		cout << "Ingresar Alumnos  [1]\n";
		cout << "Listar Alumnos    [2]\n";
		cout << "Eliminar Alumnos  [3]\n";
		cout << "Modificar Alumnos [4]\n";
		cout << "Buscar Alumnos    [5]\n";
		cout << "Salir             [6]\n:";
		cout << "Ingrese su opcion:";
		cin >> opt;
		cin.ignore();
		switch (opt) {
			case 1:system("cls"); adicionarPersonas(); break;
			case 2:system("cls"); listOfItems(); break;
			case 3:system("cls"); eliminar(); break;
			case 4:system("cls"); modificar(); break;
			case 5:system("cls"); buscar(); break;
			case 6:cout << "Gracias por comprar en nuestra tienda!!!"; exit(0); break;
			default:cout << "Ingrese una opción correcta[1-5]";
		}
	} while (opt != 6);
}
int main()
{
	menuDeOpciones();
}
void adicionarPersonas()
{
	//int cod;
	string nom;

	string bandera;
	do
	{
		//Generar Numero Correlativo
		int correlativo = alumnoVector.getCorrelativo();
		//Creando el Objeto alumno
		Alumno alumno;

		//cout << "Ingresar Codigo:";
		//cin >> cod;
		cout << "Codigo Generado(" << correlativo << ")" << endl;
		alumno.setCodigo(correlativo);

		cout << "Ingresar Nombre:";
		getline(cin, nom);

		alumno.setNombre(nom);

		//Agregar al archivo

		//Agregar
		alumnoVector.add(alumno);
		alumnoVector.grabarEnArchivo(alumno);
		cout << "Pulsar SI para continuar!!!";
		cin >> bandera;
		cin.ignore();

		system("cls");
	} while (bandera == "SI" || bandera == "si");
}

void eliminar()
{
	int codigo;
	cout << "Ingresar codigo a eliminar:";
	cin >> codigo;

	Alumno objAEliminar = alumnoVector.buscarPorCodigo(codigo);
	try {
		alumnoVector.remove(objAEliminar);
		cout << "Registro Eliminado Satisfactoriamente!!!\n";
		alumnoVector.grabarModificarEliminarArchivo();//actualizar info del archivo
	}
	catch (exception e)
	{
		cout << "Registro no encontrado!!!";
		system("pause");
		menuDeOpciones();
	}
}
void listOfItems()
{
	for (int i = 0; i < alumnoVector.rows(); i++)
	{
		cout << alumnoVector.get(i).getCodigo() << "\t\t" << alumnoVector.get(i).getNombre() << "\n";
	}
	system("pause");
	system("cls");
}
void modificar()
{
	int codigo;
	cout << "Ingresar código ñ buscar :):";
	cin >> codigo;

	Alumno objABuscar = alumnoVector.buscarPorCodigo(codigo);
	try {
		string nomModificado;
		cout << "**********************************\n";
		cout << "Registro Encontrado\n";
		cout << "**********************************\n";
		cout << "Codigo:" << objABuscar.getCodigo() << "\n";
		cout << "Nombre:" << objABuscar.getNombre() << "\n";
		cin.ignore();
		cout << "**********************************\n";
		cout << "**********************************\n";
		cout << "MODIFICANDO LOS CAMPOS\n";
		cout << "**********************************\n";
		cout << "Modificando el campo Nombre:";
		getline(cin, nomModificado);

		bool estado = alumnoVector.modificar(objABuscar, nomModificado);
		if (estado = true)
		{
			cout << "*****Registro Modificado Satisfactoriamente*****\n";
			alumnoVector.grabarModificarEliminarArchivo();//actualizar info del archivo
		}
		else
		{
			cout << "NO Editado!";
		}
		system("pause");
		system("cls");
	}
	catch (exception e)
	{
		cout << "Registro no encontrado!!!";
		system("pause");
		menuDeOpciones();
	}
}
void buscar()
{
	int codigo;
	cout << "Ingresar codigo a buscar:";
	cin >> codigo;

	Alumno objABuscar = alumnoVector.buscarPorCodigo(codigo);
	try {
		cout << "Registro Encontrado\n";
		cout << "Codigo:" << objABuscar.getCodigo() << "\n";
		cout << "Nombre:" << objABuscar.getNombre() << "\n";
		system("pause");
		system("cls");
	}
	catch (exception e)
	{
		cout << "Registro no encontrado!!!";
		system("pause");
		menuDeOpciones();
	}
}
