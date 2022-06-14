//lista con apuntadores

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<iostream>

/*
stdio es la libreria satndar de ++
para el manejo de entradas y salidas de la consola

stdlib es la libreria standar de estructuras
de datos en c++ ara listas, pilas, colas, arbol
grafos

conio es la libreria standar para el manejo de manipulacion
de la pantalla, pausar, colores, manipulacion de ventanas

*/ 

using namespace std;

//definicion de la lista

struct dato{
	int i;
	dato *s;//nodo siguiente
}*a, *i, *p, *e;

//metodos

int buscar(int d);
void insertar(void);
void mostrar(void);
void borrar(void);
void menu(void);
//void guardar(void);
//void cargar(void);

//principal
main(){
	menu();
}

//menu

void menu(void){
	int opc, da;
	do{
		//imprimir menu
		cout<<"Ejemplo de la lista de apuntadores";
		cout<<"\n 1.- Bucar dato:";
		cout<<"\n 2.- Inserte dato:";
		cout<<"\n 3.- Mostrar dato:";
		cout<<"\n 4.- Borrar dato:";
		cout<<"\n 5.- Guardar datos en un archivo:";
		cout<<"\n 6.- Cargar datos en un archivo:";
		cout<<"\n 7.- Salir:";
		cout<<"\n Seleccione la opcion deseada.";
		cin>>opc;
		
		switch(opc){
		case 1:
				//buscar
				cout<<"\n Ingrese el dato a buscar: ";
				cin>>da;
				if(buscar(da)){
					cout<<"Dato si esxiste";
				}else{
					cout<<"Dato no existe solo jugo contigo T_T";
					getch();//pausa
				}
				break;
				
		case 2:
				//ingresar
				cout<<"\ingresa el dato:";
				cin>>da;
				insertar(da);
				break;
			
		case 3:
				//mostrar
				mostrar();
				break;
			
		case 4:
				//borrar
				borrar();
				break;	
		
		case 5:
				//guardar
				guardar();
				break;
		
		case 6:
				//cargar
				cargar();
				break;
		
		case 7:
				//salir
				cout<<"n\ adios, gracias ";
				getch;
				//antes de salir del programa
				//hay que borrar todos los datos
				//de la lista
			p = i;
			while(p){
				a = p;
				p = p->s;
				delete(a);			
			}
			//salir
			exit(0);
			
		default:
			cout<<"Aprenda a leer, opcion no valida";
			getch();
			
							
		}
	}while(opc);
}


//mostrar

void mostar(void){
	int count = 1;
	//saber si hay una lista
	if(!i){
		cout<<"no hay lista para mostrar";
		getch();
		return;
	}
	p = i;
	cout<<"\n\n";
	/*
	como si existe un dato para la lista
	tenemos que empezar a recorrerla
	por cada uno de los elementos
	*/
	while(p){
		cout<<cont++<<"\nValor : "<<p->i<<enld;
		p = P -> s; 
	}
	cout<<"\n fin de la lista";
	getch();
}

//buscar
int buscar(int d){
	if(!i){
		cout<<"no hay datos en en la lista para mostrar";
		getch();
		return;
	}
	
	//si hay
	p = i;
	a = NULL
		
	while(p->s && p->i <d){
		//recorre los calores de la lista
		a = p;
		p = p->s;
		}
		
		return (p->i == d?1:0);
		}
}

/*
Para insertar cuantos caminos hay?
1.- La primera vez que se crea un dato

se debe crear el nodo y verificar los apuntadores

2.- en medio

se debe buscar donde se va a ingresar
debe de acomodar el apuntador anterior
y el apuntador siguiente (apuntador

3.- final solo se sinserta y se ajusta el apuntador
*/





void insertar(int dat){
	
	//saber si esta vacia
if(!i){
	//es la primera vez que se mete un dato
	i = new (dato);
	i->s = NULL;
	i->i = dat;
	return;
}
if(buscar(dat)){
	//porque si existe el dato
	cout<<"\n El dato existe";
	getch();
	return;
	
	}
	
	/*
	supongamos que tenemos lo siguiente
	
	nodo1 = -3, nodo2 = 0, nodo3 = 5
	
	insertar 3
	*/
	
	e = new (dato);
	
	e->i = dat;
	
	if(p==i && p->s){
		//primero hago la comparacion
		if(p->i < e->i){
			//final
			p->s = e;
			e->s = NULL;
		}else{
			e->s = p;
			i=e;
		}
		return;
	}
	if(p->s){
		a->s = e;
		e->s = p;
		return;
	}
	if(e->i > p->i){
		e->s = NULL;
		p->s = e;		
	}else{
		a->s = e;
		e->s = p;
	}	
}
//borrar
void borrar(void){
	cout<<"\n Ingresar el dato que quieres borrar";
	cin>>da;
	if(buscar(da)){
		if(a){
			a->s = p->s;
		}else{
			i=p->s;
		}
		delete(p);
		cout<<"\n Dato eliminado";
	}else{
		cout<<"\n Dato no encontrado";
		getch();
	}
}









