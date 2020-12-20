#include <iostream>
#include "Pila.h"

int menu();
int main(int argc, char** argv) {
	
	
    system("color 0a");
    Pila pila;
    int x;
    int op;

    do
    {
       op = menu();

        switch(op)
        {
            case 1: cout<< "\n\t INGRESE NUMERO A APILAR: "; cin>> x;
                    pila.Agregar(x);
                    cout<<"\n\n\t\tNumero " << x << " apilado...\n\n";
                    break;

            case 2:
                    if(pila.PilaVacia()==true)
                        cout<<"\n\n\tPila Vacia....";
                    else{
                        x = pila.Eliminar();
                        cout<<"\n\n\tNumero "<<x<<" desapilado\n";
                        }
                    break;


            case 3:
                    cout << "\n\n\t MOSTRANDO PILA\n\n";
                    if(pila.PilaVacia()!=true)
                        cout<<pila.toString();
                    else
                        cout<<"\n\n\tPila vacia..!"<<endl;
                    break;


            case 4:
                    pila.DestruirPila();
                    cout<<"\n\n\t\tPila eliminada...\n\n";
                    break;
            case 5:
                    pila.getCima();
                    break;
         }
        cout<<endl<<endl;
        system("pause");
		system("cls");

    }while(op!=6);
     
	
	
	
	
	
	

	return 0;
}


int  menu()
{
	int op;
    cout<<"\t -------------------------------------------\n";
    cout<<"\t|        IMPLEMENTACION DE UNA PILA         |\n";
    cout<<"\t|-------------------------------------------|\n";
    cout<<" \t|                                           |"<<endl;
    cout<<" \t|  1. APILAR                                |"<<endl;
    cout<<" \t|  2. DESAPILAR                             |"<<endl;
    cout<<" \t|  3. MOSTRAR PILA                          |"<<endl;
    cout<<" \t|  4. DESTRUIR PILA                         |"<<endl;
    cout<<" \t|  5. MOSTRAR CIMA                          |"<<endl;
    cout<<" \t|  6. SALIR                                 |"<<endl;
    cout<<" \t|                                           |"<<endl;
    cout<<"\t -------------------------------------------\n";
    cout<<"\t Ingrese opcion: ";
    cin>>op;
    return op;
}
