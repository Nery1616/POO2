#include "CLIENTE.cpp"
#include <iostream>

using namespace std;
 main(){
	string nit,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar la fecha de nacimiento: ";
	cin>>fecha_nacimiento;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,fecha_nacieminto,telefono,nit);
	obj.mostrar();
};