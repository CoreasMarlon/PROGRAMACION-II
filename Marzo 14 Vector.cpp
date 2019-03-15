//Codigo hecho por Marlon Salomon Coreas Villanueva
//Carnet CV18035

#include <iostream>
#include <queue>
#include <conio.h>
#include <string.h>

using namespace std;

void menu(){
	system ("cls");
	cout<<"1.  Agregar Elemento"<<endl;
	cout<<"2.  Mostrar Cola"<<endl;
	cout<<"3.  Mostrar Promedio"<<endl;
	cout<<"4.  Cantidad de Memoria usada"<<endl;
	cout<<"5.  Salir"<<endl;
	cout<<"Ingrse la Opcion: ";
}

struct Vect{
	float x;
	float y;
	float z;
};

void verf(int a);

Vect aux;
Vect *puntero;

queue<Vect> cola;

int main() {
	int opc;
	
	do{
		menu();
		cin>>opc;
		verf(opc); 
		
		switch(opc){
			case 1:{
				int n;
				do{
					system("cls");
					cout<<"Ingrese las coordenadas x, y, z en este orden respectivamente: "<<endl;
					cout<<"Nota: Si ingresa letras los datos se toman como 0!"<<endl;
					cout<<"X = ";
					cin>>aux.x;
					verf(aux.x);
					cout<<"Y = ";
					cin>>aux.y;
					verf(aux.y);
					cout<<"Z = ";
					cin>>aux.z;
					verf(aux.z);
					cola.push(aux);
					do{
						system("cls");
						cout<<"1. Ingresar mas Elementos"<<endl;
						cout<<"2. Salir al menu"<<endl;
						cin>>n;
						verf(n);
					}while(n < 1 || n > 2);
				}while(n==1);
				break;
			}
			case 2:{
				system ("cls");
				cout<<"_____________________________________________"<<endl;
				cout<<"       	COORDENADAS EN COLA"<<endl;
				cout<<"_____________________________________________"<<endl;
				puntero = &cola.front();
				for(int i=1; i<=cola.size(); i++){
					aux = *puntero;
					cout<<"X = "<<aux.x<<endl;
					cout<<"Y = "<<aux.y<<endl;
					cout<<"Z = "<<aux.z<<endl;
					cout<<"________________________________________"<<endl ;
					puntero++;
				}
				system("PAUSE");
				break;
			}
			case 3:{
				system ("cls");
				int zi;
				float sx = 0;
				float sy = 0;
				float sz = 0;
				puntero = &cola.front();
				for(int i=1; i<=cola.size(); i++){
					aux = *puntero;
					sx = (sx + aux.x);
					sy = (sy + aux.y);
					sz = (sz + aux.z);
					puntero++;
				}
				cout<<"El promedio de las coordendas es : "<<endl;
				cout<<"X = "<<sx / cola.size()<<endl;
				cout<<"Y = "<<sy / cola.size()<<endl;
				cout<<"Z = "<<sz / cola.size()<<endl;
				system("pause");
				break;
			}
			case 4:{
				system("cls");
				cout<<"La Cantidad de Memoria usada actualmente"<<endl;
				cout<<"es: ";
				cout<<(12*cola.size())<<" Bits"<<endl;
				system("pause");
				break;
			}
			case 5:{
				exit(0);
			}
		}
	}while(true);
	return 0;
}

void verf(int a){
	if(cin.fail()){
		cin.clear();
		cin.ignore();
	}
}
