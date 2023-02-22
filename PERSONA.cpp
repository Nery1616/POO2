#include <iostream>

using namespace std;

class Persona{
	//atributos
	protected : string nombres,apellidos,direccion,fecha_nacimiento;
	            int telefono;
	//constructor
	protected : 
				Persona(){
				}
				Persona(string nom,string ape,string dir,string nac, int tel){
					nombres=nom;
					apellidos=ape;
					direccion=dir;
					telefono=tel;
					fecha_nacimiento=nac;
				}
	//metodo			 
	void mostrar();
};