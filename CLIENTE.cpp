#include "PERSONA.cpp"
#include <iostream>

using namespace std;

class Cliente : Persona {
	//atributos
	private : string nit;
	
	//constructor
	public :
		Cliente (){
		}
		Cliente(string nom, string ape,string dir, int tel, string n,string nac) : Persona(nom,ape,dir,tel,nac){
			nit=n; 
		}
		
		//set (modificar)
		void setNit(string n){nit =n;}	
		void setNombres(string nom){nombres =nom;}
		void setApellidos(string ape){apellidos =ape;}
		void setDireccion(string dir){direccion =dir;}
		void setTelefono(int tel){telefono =tel;}
		void setFecha_Nacimiento(string nac){fecha_nacimiento=nac;}
		
		
		//get (mostrar)
		string getNit(){return nit;}
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		string getDireccion(){return direccion;}
		string getFecha_nacimiento(){return fecha_nacimiento;}
		int getTelefono(){return telefono;}
		
		
		//metodos
		void mostrar(){
			cout<<"________________________"<<endl;
			cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_nacimiento<<endl;
		}
};
