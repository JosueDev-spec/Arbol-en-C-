#include <stdlib.h>
#include <iostream>
#include<sstream>
using namespace std;


class Nodo
{
    private:
    	int dato ;
    	Nodo * nodo_siguiente;
    public:
	Nodo();
	Nodo(int);
	void setDato(int);
	Nodo * get_Nodo_siguente();
	void set_Nodo_siguente(Nodo *);
	int getDato();
	void Vaciar();
	string Mostrar();
	~Nodo();
	

};

