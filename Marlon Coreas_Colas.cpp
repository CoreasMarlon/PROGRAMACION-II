//Codigo hecho por Marlon Salomon Coreas Villanueva
//Carnet CV18035

#include <iostream>
#include <queue>
#include <conio.h>
#include <string.h>

using namespace std;

void menu(){
	system ("cls");
	cout<<"1.  Agregar ticket"<<endl;
	cout<<"2.  Ver Clientes en Cola"<<endl;
	cout<<"3.  Eliminar Ticket"<<endl;
	cout<<"4.  Salir"<<endl;
	cout<<"Ingrse la Opcion: ";
}

struct banco{
	string new_t;
	char nombre[50];
	int edad;
};

banco aux;
banco *puntero;

queue<banco> cola;

int main() {
	int opc;
	
	do{
		menu();
		cin>>opc;
		cin.clear(); 
		
		switch(opc){
			case 1:{
				int n;
				do{
					do{
						system("cls");
				 		cout << "Escibe el numero del Ticket de 4 digitos: ";
				 		cin >>aux.new_t; 
					}while(aux.new_t.size() != 4) ;
					cout<<"Ingrese el Nombre del cliente: ";
					cin>>aux.nombre;
					cout<<"Ingrse la edad del cliente: ";
					cin>>aux.edad;
					cout<<endl<<endl;
					cola.push(aux);
					cout<<"Desea agragar mas tiquecks?"<<endl;
					cout<<"1. Si"<<endl;
					cout<<"2. No"<<endl;
					cin>>n;
				}while(n > 2 || n <= 1);
				break;
			}
			case 2:{
				puntero = &cola.front();
				for(int i=1; i<=cola.size(); i++){
					aux = *puntero;
					cout<<"Ticket N: "<<aux.new_t<<endl;
					cout<<"Nombre: "<<aux.nombre<<endl;
					cout<<"Edad: "<<aux.edad<<endl;
					puntero++;
				}
				cout<<endl;
				system("PAUSE");
				break;
			}
			case 3:{
					cola.pop();
					cout<<endl<<"Se eliminino el primer cliente"<<endl;
					system("pause");
				break;
			}
			case 4:{
				exit(0);
			}
		}
	}while(true);
	
	
	
	
	
	
	return 0;
}
