#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;


struct ICO{
	int i;
	char clave[20];
	char nombre[30];
	float calificacion;
}*i, *p;

struct Nodo{
	ICO alumnos;
	Nodo *siguiente;
};

 
void menu();
void agregarDatos(ICO &);
void insertarDatos(Nodo *&, Nodo *&, ICO);
bool c_vacia(Nodo *);
void guardar(void);
void cargar(void);

int main(){
	
	
	ICO alumnos;
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	char opcion;
	
	do{
		menu();
		cin>>opcion;
	
		fflush(stdin);
		 
		Nodo *aux = frente;
		
		switch(opcion){
			case 1:	
				agregarDatos(alumnos);
				insertarDatos(frente, fin, alumnos);
				break;
			case 2:
				cout<<"\n La clave \t"<<"NOMBRE\t"<<"CALIFICACION\n";
				while(aux != NULL){
					cout<<aux->alumnos.clave<<"\t"<<aux->alumnos.nombre<<"\t"<<aux->alumnos.calificacion<<"\t"<<endl;
					aux = aux->siguiente;
				}
				break;
			case 3: 
				
				modificar();
				break;
			case 4: 
				guardar
				eliminar();
			 	break;*/
			case 5: 
				buscar
				buscar();
				 break;*/
			case 6:
				cout<<"\nAdios\n";
				break;
			default:
				cout<<"\nOpcion no valida \n";
				break;
				
		}
		
		getch();
		cout<<"Presionar una tecla para continuar\n";
		system("cls");
	}while(opcion != '3');
	
	return 0;
}

void menu(){
cout<<"\nMENU DE ALUMNOS MATRICULADOS\n";
		cout<<"\n1.- Agregar datos del alumno\n";
		cout<<"\n2.- mostrar alumno\n";
		cout<<"\n3.- Modificar datos del alumno\n";
		cout<<"\n4.- Eliminar alumno\n";
		cout<<"\n5.- buscar datos del alumno\n";
		cout<<"\n6.- Guardadr datos en un archivo: ";
		cout<<"\n7.- Salir\n";
	}

void agregarDatos(ICO &alumnos){
	cout<<"\nIngresar clave del alumno:\n";
	cin.getline(alumnos.clave, 20, '\n');
	
	cout<<"\nIngresar nombre del alumno:\n";
	cin.getline(alumnos.nombre, 30, '\n');
	
	cout<<"\nIngresar calificacion del alumno:\n";
	cin>>alumnos.calificacion;
	
}

void insertarDatos(Nodo *&frente, Nodo *&fin, ICO alumnos){
	
	Nodo *n_nodo = new Nodo();
	
	
	n_nodo -> alumnos = alumnos;
	
	
	n_nodo -> siguiente= NULL;
	
	if (c_vacia(frente)){
		
		frente = n_nodo;
	}else{
		
		fin ->siguiente = n_nodo;
	}
	
}

bool c_vacia(Nodo *frente){
	
	return (frente == NULL)? true:false;
}

void guardar(void){
	 FILE *arch;
	 arch=fopen("DATO.TXT","w");
	 if(!i){
	 cout<<"\nno hay lista ";
	 getch();
	 return;
	 }
	 p=i;
	 while(p){
	 fprintf(arch,"%i\n",p->i);
	 }
	 cout<<"\nguardado";
	 fclose(arch);
	 getch();
	 }