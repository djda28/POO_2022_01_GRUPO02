#include<vector>
#include"alumno.h"
#include<iostream>
#include<fstream> /*Librerias para archivos*/
using std::stoi;//Convertir de string a int
using namespace std;
class AlumnoVector
{
private:
	vector<Alumno> vectorAlumno;
public:
	AlumnoVector()
	{
		cargarDatosDelArchivoAlVector();
	}
	int getCorrelativo()
	{
		if (vectorAlumno.size() == 0)
		{
			return 1;
		}
		else
		{
			return vectorAlumno[vectorAlumno.size() - 1].getCodigo() + 1;
		}
	}
	void add(Alumno obj)
	{
		vectorAlumno.push_back(obj);
	}

	Alumno get(int pos)
	{
		return vectorAlumno[pos];
	}

	int rows()
	{
		return vectorAlumno.size();
	}

	Alumno buscarPorCodigo(int codigo)
	{
		Alumno objError;
		objError.setNombre("ERROR");
		for (Alumno x : vectorAlumno)
		{
			if (codigo == x.getCodigo())
			{
				return x;
			}
		}
		return objError;		
	}

	int getPostArray(Alumno obj)
	{
		for (int i = 0; i < vectorAlumno.size(); i++)
		{
			if (obj.getCodigo() == vectorAlumno[i].getCodigo())
			{
				return i;/*Retorna la posicion del elemento dentro del vector*/
			}
		}
		return -1;
	}

	void remove(Alumno obj)
	{
		vectorAlumno.erase(vectorAlumno.begin() + getPostArray(obj));
	}

	bool modificar(Alumno obj, string nom)
	{
		for(int i = 0; i < rows(); i++)
		{
			if (obj.getCodigo() == get(i).getCodigo())
			{
				vectorAlumno[i].setNombre(nom);
				return true;
			}
		}
		return false;
	}
	
	void grabarEnArchivo(Alumno obj)
	{
		try
		{
			fstream archivoAlumnos;
			archivoAlumnos.open("alumnos.csv", ios::app);
			if (archivoAlumnos.is_open())
			{
				archivoAlumnos << obj.getCodigo() << ";" << obj.getNombre() << ";" << "\n";
				archivoAlumnos.close();
			}
		}
		catch (exception e)
		{
			cout << "Ocurrio un error al grabar en el archivo";
		}
	}
	void grabarModificarEliminarArchivo()
	{
		try
		{
			fstream archivoAlumnos;
			archivoAlumnos.open("alumnos.csv", ios::out);
			if (archivoAlumnos.is_open())
			{
				for (Alumno x : vectorAlumno)
				{
					archivoAlumnos << x.getCodigo() << ";" << x.getNombre() << ";" << "\n";
					
				}
				archivoAlumnos.close();
			}
		}
		catch (exception e)
		{
			cout << "Ocurrio un error al grabar en el archivo";
		}
	}
	void cargarDatosDelArchivoAlVector()
	{
		try
		{
			int		i;
			size_t posi;//Cantidad maxima
			string	linea;
			string temporal[2];//Cantidad de columnas
			fstream archivoAlumnos;
			archivoAlumnos.open("alumnos.csv", ios::in);
			if (archivoAlumnos.is_open())
			{
				while (!archivoAlumnos.eof()) 
				{
					while (getline(archivoAlumnos, linea))
					{
							i = 0;
							while ((posi = linea.find(";")) != string::npos) {/*string::npos es -1, termina cuando llega a este punto*/
								temporal[i] = linea.substr(0, posi);/*posi = Es la cantidad de caracteres antes del ;*/
								linea.erase(0, posi + 1);//borra la palabra de la primera posición encontrada   y con el +1 incluye hasta el ; y luego borra ese elemento, para que en la siguiente iteracion iniciar con la siguiente palabra y de ese modo seguir el proceso , 
								i++;
							}
							//Asignando los valores al vector
							Alumno alumno;

							alumno.setCodigo(std::stoi(temporal[0]));
							alumno.setNombre(temporal[1]);

							add(alumno);
					}
				}
			}
			archivoAlumnos.close();
		}
		catch (exception e)
		{
			cout << "Ocurrio un error al leer el archivo";
		}
	}
};