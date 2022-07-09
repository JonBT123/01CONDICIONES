#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;


struct nodo{
	string dato;
	float dinero;
	int prioridad;
	int turno;
	struct nodo *siguiente;
};


struct cola{
	nodo *delante;
	nodo *atras;
};


struct nodo *crearNodo(string dat , float dine, int pri, int tur){
	struct nodo *nuevoNodo = new (struct nodo);
	nuevoNodo->dato=dat;
	nuevoNodo->dinero=dine;
	nuevoNodo->prioridad=pri;
	nuevoNodo->turno=tur;
	return nuevoNodo;
}

void encolar(struct cola &q, string valor, int priori, float dinero, int turno){

	struct nodo *aux = crearNodo(valor, dinero, priori, turno);
	aux->siguiente=NULL;
	
	if(q.delante == NULL){
	
		q.delante=aux;
	}else{
		(q.atras)->siguiente = aux;
	}

	q.atras = aux;
}

void mostrarCola(struct cola q){

	struct nodo *aux;
	aux = q.delante;
	while(aux != NULL){
		cout<<"Nombre: "<<aux->dato<<" Prioridad: "<<aux->prioridad<<" Dinero $"<<aux->dinero<<" Su turno es: "<<aux->turno<<endl;
		aux = aux->siguiente;
	}
}

void ordenarPrioridad(struct cola &q){
	
	struct nodo *aux1, *aux2;
	int p_aux;
	string c_aux;
	float d_aux;
	
	aux1 = q.delante;
	
	while(aux1->siguiente != NULL){
		aux2 = aux1->siguiente;
		while(aux2!=NULL){
			if(aux1->prioridad > aux2->prioridad){
				p_aux = aux1->prioridad;
				c_aux = aux1->dato;
				d_aux = aux1->dinero;
				
				aux1->prioridad = aux2->prioridad;
				aux1->dato = aux2->dato;
				aux1->dinero = aux2->dinero;
				
				aux2->prioridad = p_aux;
				aux2->dato = c_aux;
			}
			aux2=aux2->siguiente;
		}
		aux1 = aux1->siguiente;
	}
}
void insertar(struct cola &q, string c, int diner, int pri, int turn){
	//Encolar
	encolar(q, c, diner, pri, turn);
	ordenarPrioridad(q);
}
void menu(){
	cout<<"cola de prioridad"<<endl;
	cout<<"1.- Asignar turno"<<endl;
	cout<<"2.- Mostrar tarjeta habientes en fila"<<endl;
	cout<<"3.- Salir"<<endl;
}

int main(){
	struct cola q;
	
	q.delante = NULL;
	q.atras = NULL;
	
	string c;
	int priori;
	float din;
	int tu;
	int op, op2;
	int x;
	
	do{
		menu();
		cin>>op;
		switch(op){
			case 1:
				cout<<"\nIngreses su nombre: \n";
				cin>>c;
				do{
				cout<<"CUENTAS"<<endl;
				cout<<"1.- VIP"<<endl;
				cout<<"2.- EMPRESARIAL"<<endl;
				cout<<"3.- NORMAL"<<endl;
				cout<<"4.- NINGUNA"<<endl;
				cin>>priori;
				}while(priori<0||priori>4);
				
				cout<<"Ingresar turno: \n";
				cin>>tu;
				
				do{
				cout<<"\nIngreses una cantidad de dinero $\n";
				cin>>din;
				}while(din<0||din>5000);
				insertar(q, c, priori, din, tu);
				
				cout<<"\n Usuario: "<<c<<" ingresado\n";
				break;
				
			case 2:
				cout<<"\n Mostrar elemento de la cola: \n";
				if(q.delante!=NULL){
					mostrarCola(q);
				}else{
					cout<<"\n La cola esta vacia\n";
				}
				break;
				
			default:
				cout<<"Seleccione una opcion valida\n";
				system("pause");
				exit(0);
			}
		system("pause");
	system("cls");
	}while(op!=3);
	return 0;
}