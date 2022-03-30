// Semana02.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
Condicional Simple
if(condicion){


}
Condicinoal Doble
if(condicion){


}else{



}

Multiples
if(condicion){


}
e if(condicion){


}
else if(condicion){



}else
{


}



&&  = i
||  = 0


*/

//

#include <iostream>
using namespace std;
//Globales
/*IFuncion que imprima un mensaje de bienvenida*/
string mostrarMensaje() {
    return "Bienvenido al tema de funciones y procedimientos";
}

//Función para encontrar el mayor de 4 notas
float mayorDeCuatroNotas(float nota1,
                         float nota2,
                         float nota3,
                         float nota4) 
{
    if (nota1 > nota2 && nota1 > nota3 && nota1 > nota4) {
        return nota1;
    }
    else if (nota2 > nota1 && nota2 > nota3 && nota2 > nota4) {
        return nota2;
    }
    else if (nota3 > nota1 && nota3 > nota2 && nota3 > nota4) {
        return nota3;
    }
    else {
        return nota4;
    }
}
//Función promedio de los tres mayores
float promedioTresMayores(  float nota1,
                            float nota2,
                            float nota3,
                            float nota4
                          ) 
{
    if (nota1 < nota2 && nota1 < nota3 && nota1 < nota4) {
        return (nota2 + nota3 + nota4) / 3;
    }
    else if (nota2 < nota1 && nota2 < nota3 && nota2 < nota4) {
        return (nota1 + nota3 + nota4)/3;
    }
    else if (nota3 < nota1 && nota3 < nota2 && nota3 < nota4) {
        return (nota1 + nota2 + nota4) / 3;
    }
    else {
        return (nota1 + nota2 + nota3) / 3;
    }

}

//Imprimir Resultados

void imprimirResultados(float may,string msg) {
    cout << "El mayor es:" << may<<endl;
    cout << "Llamada directa:"<<mostrarMensaje()<<endl;
    cout << "Llamada con parametro:" << msg;
}


int main()
{
    //Declaracion de variables;
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float mayor;
    string capturarMensaje;
    
    //Entrada
    cout << "Ingresar Nota 01:"; cin >> nota1;
    cout << "Ingresar Nota 02:"; cin >> nota2;
    cout << "Ingresar Nota 03:"; cin >> nota3;
    cout << "Ingresar Nota 04"; cin >> nota4;
    //Algoritmo - proceso
    
    mayor           = mayorDeCuatroNotas(nota1, nota2, nota3, nota4);
    capturarMensaje = mostrarMensaje();
    //Salida
    imprimirResultados(mayor, capturarMensaje);
}