#include "Nodo.h"
class Pila{  
	private:
		Nodo *cima;
		
    public:
        Pila();
        void Agregar(int);
        int Eliminar();
        Nodo * getCima(void);
        bool PilaVacia();
        string toString(void);
        void DestruirPila();
};
