#include <iostream>     //Jesus Miranda Moreno :*
#include <stdlib.h>
#include<string>
#include<iomanip>
using namespace std;
struct nodo{
       string Nombretiket;//Lista
       int numtik; 
	   	   struct nodo *sgte;
};
 
typedef struct nodo *Tlista;    
 
void insertarFinal(Tlista &lista,string nomm, int numer)
{
    Tlista t, q = new(struct nodo);
 
    q->Nombretiket  = nomm;
    q->numtik = numer;
    q->sgte = NULL;
 
    if(lista==NULL)
    {
        lista = q;
    }
    else
    {
        t = lista;
        while(t->sgte!=NULL)
        {
            t = t->sgte;
        }
        t->sgte = q;
    }
 
}
 

void reportarLista(Tlista lista)
{
     int i = 0;
 	cout<< "+---------------------------+---------------------------+\n";
     while(lista != NULL)
     {
          cout << "|" <<"Articulo"<< i+1 <<": " << left << setw(16)<< lista->Nombretiket << "|CANTIDAD. "<< setw(21)<<lista->numtik<< endl;
		  lista = lista->sgte;
          i++;
     } 
     cout<< "+---------------------------+---------------------------+\n";
}

void eliminarElemento(Tlista &lista)
{
    Tlista p, ant;
    p = lista;
    if(lista!=NULL)
    {
        while(p!=NULL)
        {
                if(p==lista)
                    lista = lista->sgte;
                else
                    ant->sgte = p->sgte;
 
                delete(p);
                return;
            }
           // ant = p;
            p = p->sgte;
        }
    else
        cout<<" Lista vacia..!";
        
}
void menu1()
{
    cout<<"\n\t\tQUIEN USA EL SISTEMA\n\n";
    cout<<" 1. EMPLEADO               "<<endl;
    cout<<" 2. TECNICO               "<<endl;
    cout<<" 0. FIN             "<<endl;
    cout<<"\n INGRESE OPCION: ";
}
void menu_empleado(){

    printf("\n\t\t[    REGISTRO DE TICKETS    ]\n");
    printf("\t\t----------------------------\n\n");
    printf(" 1. REGISTRO DE TICKET\n");
    printf(" 9. SALIR\n");

    printf("\n INGRESE OPCION : ");
}

void menu_tecnico(){

    printf("\n\t\t[    TICKETS REGISTRADOS   ]\n");
    printf("\t----------------------------\n\n");
    printf(" 1. LEER TICKETS\n");
    printf(" 2. DAR EL TICKET\n");
    printf(" 3. SALIR  \n");
    printf("\n INGRESE OPCION : ");
}
