#include<string>
using namespace std;
class Alumno
{
private:
	int 	codigo;
	string	nombre;

public:
	Alumno()
	{

	}

	~Alumno()
	{

	}
	void	setCodigo(int cod)
	{
		codigo = cod;
	}
	void	setNombre(string nom)
	{
		nombre = nom;
	}

	int 	getCodigo()
	{
		return this->codigo;
	}
	string 	getNombre()
	{
		return this->nombre;
	}
};