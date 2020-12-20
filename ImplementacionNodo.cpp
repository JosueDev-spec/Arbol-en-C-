#include "Nodo.h"


Nodo::Nodo()
{
	dato = 0;
	nodo_siguiente = NULL;

}
void Nodo::setDato(int _dato)
{
	dato= _dato;
}
int Nodo::getDato()
{
	return dato;
}
Nodo * Nodo::get_Nodo_siguente()
{
	return nodo_siguiente;
}
void Nodo::set_Nodo_siguente(Nodo * nuevo)
{
	nodo_siguiente = nuevo;
}

Nodo::Nodo(int _dato)
{
	
	dato = _dato;
	nodo_siguiente = NULL;
	
	
}

void Nodo::Vaciar(){
	if (nodo_siguiente)
	{
		nodo_siguiente->Vaciar();
		delete this;
	}
	
}
string  Nodo::Mostrar()
{ stringstream nodoInfo;
	nodoInfo<<"Nodo = "<<"[ Dato : "<<dato<<"] [Direccion : "<<this<<"] [Siguiente : "<<nodo_siguiente<<"]"<<endl;
	return nodoInfo.str();
}
Nodo::~Nodo()
{
	
	
}

