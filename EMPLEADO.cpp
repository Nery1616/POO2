#include "PERSONA.cpp"
#include <iostream>

using namespace std;

class Empleado : Persona {
	//atributo
	private : string cod_empleado;
	
	
	//constructor 
	public :
		Empleado(){
		}
		Empleado(string nom, string ape,string dir, int tel, string n,string cod) : Persona(nom,ape,dir,tel,nac){
		    nit=n;
			codigo_empleado=cod;
			puesto=pue;
		}
		
			//set (modificar)
		void setNit(string n){nit =n;}	
		void setNombres(string nom){nombres =nom;}
		void setApellidos(string ape){apellidos =ape;}
		void setDireccion(string dir){direccion =dir;}
		void setTelefono(int tel){telefono =tel;}
		void setCodigo_empleado(string cod)(codigo_empleado=cod;)
		void setPuesto(string pue)(puesto=pue;)
		void setFecha_nacimiento(string nac)(fecha_nacimiento=nac)
		//get (mostrar)
		string getNit(){return nit;}
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		string getDireccion(){return direccion;}
		int getTelefono(){return telefono;}
		string getCodigo_empleado(){return codigo_empleado;}
		string getPuesto(){return puesto;}
		string getFecha_nacimiento(){return fecha_nacimiento;}
		
		//metodos
		void mostrar(){
			cout<<"________________________"<<endl;
			cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<codigo_empelado<<","<<puesto<<","<<fecha_nacimiento<<endl;
		}
};
