/*
vamos a programar dos pilas que
sirvan para poder unir ambos elemtos
el programa debe contener
ingresar el tamaño de la pila
en menu
push, pop y mostrar los elemtos de la
pila

*/

#include<iostream>
#include<conio.h>

using namespace std;

//vamos a definir una pila dentro de otra
struct nodo{
	int nro;
	struct nodo *siguiente;
};

//definir una estructura de la pila
typedef nodo *pila;

//metodos del programa
void imprimir1(pila);
void imprimir2(pila);
void eliminarPila(pila &);
void push(pila &, int);
void unir(pila, pila);
int pop(pila&);

main(){
	//declarar las pilas
	pila p1 = NULL;
	pila p2 = NULL;
	pila p3 = NULL;
	
	int opc, n, valor, i;
	
	do{
		cout<<"1.- Apilar. \n";
		cout<<"2.- Ver la pila. \n";
		cout<<"3.- Unir. \n";
		cout<<"4.- Salir. \n";
		cout<<"Ingresar la opcion deseada: \n";
		
		cin>>opc;
		
		switch(opc){
			case 1:
				cout<<"Ingrese el limite de la pila: \n";
				cout<<"Valores de la pila 1: \n";
				for(1 = 0; i < n; i++){
					cout<<"Valor: "<<endl;
					cin>>valor;
					push(p1, valor);
				}
				cout<<"Valores de la pila 2: \n";
				for(1 = 0; i < n; i++){
					cout<<"Valor: "<<endl;
					cin>>valor;
					push(p2, valor);
				}
			break;
			case 2:
				cout<<"Contenido de la pila 1: \n";
				imprimir1(p1);
				cout<<"Contenido de la pila 2: \n";
				imprimir1(p2);
			break;
			case 3:
				cout<<"Pilas unidas";
				unir(p1, p2);
				break;
									
		}
		
	}while(opc!=4);
}
 
void unirPilas(pila p1, pila p2){
	pila q = p1;
	while(q->siguiente!=NULL){
		q=q->siguiente;
		q->siguiente=p2;
	}
}while 



void push(pila &p, int n){
	pila q=new (struct nodo);
	q->nro=n;
	q->siguiente = p;
	p=q;
}




















