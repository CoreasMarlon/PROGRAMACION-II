//Programado por Marlon Salomon Coreas Villanueva CV18035
#include <iostream>
#include <stack>
#include <cstdlib>
#include <conio.h>
#include <string.h>

using namespace std;

int opc;
int menu();
void verf(int a);

struct estudiante{
	char due[9];
	char nombre[51];
	char apellido[51];
	int edad;
};

estudiante eaux;
estudiante *p;
int res;
stack<estudiante> pila;

int main() 
{
	do
	{
	
	    menu();
	    
	    switch(opc)
		{
	    	case 1:
			{
	    		do
				{
				    cout<<"DUE:"<<endl;
				    cin>>eaux.due;
				    cout<<"Nombre:"<<endl;
					cin>>eaux.nombre;
				    cout<<"Apellido:"<<endl;
					cin>>eaux.apellido;
					cout<<"Edad: "<<endl;
					cin>>eaux.edad;
				    do{
				    pila.push(eaux);
				    cout<<"Quiere ingresar otro Estudinte: "<<endl;
				    cout<<"1. SI"<<endl;
				    cout<<"2. NO"<<endl;
				    cin>>res;
					}while(res < 1 || res > 2);
				    system("cls");
			   }while(res == 1);
			}
			break;
			case 2:
			{
				cout<<"Se a eliminado el ultimo regstro ingresado!"<<endl;
				pila.pop();
				p = &pila.top();
				cout<<"Click para volver al Menu"<<endl;
				system("pause");
			}
			break;
			case 3:
			{
				p=&pila.top();
				int c=1;
			    while(c<=pila.size())
			    {
				    eaux=*p;
				    cout<<eaux.due<<endl;
				    cout<<eaux.nombre<<endl;
				    cout<<eaux.apellido<<endl;
				    cout<<eaux.edad<<endl;
				    cout<<"----------------"<<endl;
				    p--;
				    c++;
			    }
			    p = &pila.top();
			    system("pause");
			    cout<<"Click para volver al Menu"<<endl;
			}
			break;
			case 4:
			{
				char dueB[9];
				char dueO[9];
				cout<<"Ingrese el due que desea Buscar: ";
				cin>>dueB;
				p = &pila.top();
				for (int i=1; i<=pila.size(); i++){
					eaux = *p;
					if(dueB == eaux.due)
					{
						cout<<"DUE: "<<eaux.due<<endl;
					    cout<<"Nombre: "<<eaux.nombre<<endl;
					    cout<<"Apeliido: "<<eaux.apellido<<endl;
					    cout<<"edad: "<<eaux.edad<<endl;
					}
					p--;
				}
				p = &pila.top();
				cout<<"Click para volver al Menu"<<endl;
				system("pause");
					
			}
			break;
			case 5:
			{
				exit (0);
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

int menu(){
	system("cls");
	do{
		cout<<"____________________________________________"<<endl<<endl;
		cout<<"         RESGISTRO DE ESTUDIANTES"<<endl;
		cout<<"____________________________________________"<<endl<<endl;
		cout<<"1.  Registrar Estudiantes"<<endl;
		cout<<"2.  Eliminar Registro"<<endl;
		cout<<"3.  Ver Registro de Estudiantes"<<endl;
		cout<<"4.  Buscar Registro"<<endl;
		cout<<"5.  Salir"<<endl;
		cin>>opc;
		system("cls");
		verf(opc);
	}while(opc < 1 || opc > 5 || cin.fail());
	return opc;
}

