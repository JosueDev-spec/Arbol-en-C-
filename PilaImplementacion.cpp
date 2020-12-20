#include "Pila.h"


Pila::Pila()
{
	cima= NULL;
}
void Pila::Agregar(int dato)
{
	Nodo *aux = new Nodo(dato);	
	aux->set_Nodo_siguente(cima);
	cima = aux;
}
int Pila::Eliminar()
{
	int x;
	Nodo *aux  ; 
	if (cima == NULL){
		cout<<"La Pila se encuentra vacia ";
	}
	else{
		aux = cima;
		x = aux->getDato(); 
		cima = cima->get_Nodo_siguente();
		delete(aux);
	}
	
	return  x;
}

string Pila::toString()
{
	Nodo * aux;
	stringstream PilaInfo;
	aux= cima;
	while(cima!=NULL)
	{
		PilaInfo<<"\t"<<aux->getDato()<<endl;
		aux = aux->get_Nodo_siguente();
		
	}
	return PilaInfo.str();
}

void Pila::DestruirPila()
{
	Nodo * aux;
	while(cima!=NULL)
	{
		aux = cima;
		cima = cima->get_Nodo_siguente();
		delete(aux);
		
		
	}
	
	
	
}
bool Pila::PilaVacia()
{
	return (cima==NULL);
}
Nodo * ::Pila::getCima()
{
	return cima;
}




