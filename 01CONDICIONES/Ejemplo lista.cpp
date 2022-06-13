/*

una lista es una estructura de datos que deriva
una secuencia conectada con nodos y cada yno de los
cuales contiene un dato
Hay un nodo al cominzo llamado la cabeza o frente
Hay un nodo del termino llamado cola o atras

la lista solo puede ser recorrida en secuencia de atars o 
hacia adelante

operacioenes de su propia estructura

añadir  insertar elemeto
mover atraves de la lista de pri a fin
buscar elementos

Apuntadores

& memoria
* al dato
-> asignacion

Nodo *elemento -> &elemento -> valor

en c++ vamos ocupar list ya que es una clase
de tipo templete (es una plantilla)
nos permite crear listas que contengan
cualquier tipo de objeto

las operaciones que se pueden incluir en la lista son:

push meter
pop sacar

begin()
end()

size()
empty()







*/

#include<iostream>

using namespace std;

//definir la estructura de la lista
struct Nodo{
	//los valores de la lista
	int valor;
	Nodo *siguiente;
}

//definir los metodos
void insertaLista(Nodo *&, int);

int main(){
	//declarar mi variable de la lista
	//que apunte a null
	nodo *lista = NULL;
	
	///variables
	int op = 1, c, i=0, valores;
	
	cout<<"(Trabajando con listas(simples, doblemente enlazadas, circulares y ciculares dobles)"<<endl;
	while(op!=3){
		cout<<"ejemplo de lista simple"<<endl;
		cout<<"1.- Inserte nuevo valor"<<endl;
		cout<<"2.- Ver la lista"<<endl;
		cout<<"3.- Salir"<<endl;
		cin>>op;
		switch(op){
			case 1:
				cout<<"1.- Indica el numero de valores a introducir\n";
				cin>>valores;
				while(i<valores){
					cout<<"valores["<<i<<"]\n";
					cin>>c;
					//insertar el valor
					insertarLista(lista,c);
					i++;
				}
				break;
			case 2:
				cout<<"mostrar los valores de la lista\n";
				cout<<"imprimir valores";
				break;
			default:
				cout<<"Gracias por mimir aqui uwu";				
		}
	}
	return 0;
}

void insertarLista(nodo *&lista, int c){
	//crear una nueva lista
	Nodo *inslista = new Nodo();
	//debo de asignar el valor de la lista
	inslista->valor = c;
	
	//nececita un auxiliar para encadenar los valores de la lista
	Nodo *aux = lista;
	Nodo *aux2;
	//meter los valores de forma ordenada
} 








