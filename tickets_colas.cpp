//JESUS MIRANDA MORENO
#include"funciones.h"
int main()
{
    Tlista lista = NULL;
    int op;     // opcion del menu
    string _dato;    //elemento a ingresar
    int _dato2;  // elemenento a ingresar
 	system("color 0b"); 
 	do{
    menu1();  cin>> op;
 	if(op==1){
 		do{
 			menu_empleado();
 			cin>>op;
      		switch(op)
      		{
	   		    case 1: 
               	cout<< "\n ARTICULO: ";
				fflush(stdin); 
				getline(cin,_dato);
                fflush(stdin);
               	cout<< "\n CANTIDAD: "; cin>> _dato2;
                insertarFinal(lista, _dato,_dato2);
           		reportarLista(lista);
           		system("PAUSE");
           		system("cls");
           		break;
           		
         		case 9:
         		system("cls");
          		break;	
				default: printf("\nINGRESE UNA OPCION VALIDA...\n"); break;		 
			}
		}
		while(op!=9);
	}
	if(op==2){
		do{
			menu_tecnico();
			cin>>op;
      		switch(op)
      		{
	   		    case 1: 
           		reportarLista(lista);
           		system("PAUSE");
           		system("cls");
           		break;
           		
         		case 2:
         		cout<<"SE ENTREGO EL TICKET"<<endl;
         		eliminarElemento(lista);
         		reportarLista(lista);
           		system("PAUSE");
           		system("cls");
          		break;	
				
				case 3:
				system("cls");
				break;		 
			}
			
		}while(op!=3);
	}
	}while(op!=0);
    cout<<endl<<endl;
    system("pause"); system("cls");
   return 0;
}
