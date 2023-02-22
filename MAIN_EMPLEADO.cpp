#include "EMPLEADO.cpp"
#include <iostream>

using namespace std;
 main(){
	string nit,nombres,apellidos,direccion,codigo_empleado,;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar codigo de empleado: ";
	cin>>codigo_empleado;
	cout<<"Ingrese su nuevo puesto: ";
	cin>>puesto;
	cout<<"Ingresar su fecha de nacimiento: ";
	cin>>fecha_nacimiento;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//instancia de un objeto
	Empleado obj = Empleado(nombres,apellidos,direccion,telefono,nit,codigo_empelado,puesto);
	obj.mostrar();
};