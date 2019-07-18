#include "Cola.cpp"
#include "Fila.h"
#include <iostream>

using namespace std;
int main(){
	Fila fa;
	Cola<Fila> columna;
	for (int i=1;i<11;i++){
		columna.Insertar(Fila(i));
	}

	int resp;

	do{
		do{
			cout<<"¡Hola! ¿Qué tabla de multiplicar deseas ver? (1-10)\n(0 sale del sistema)"<<endl;
			cin>>resp;
			if (resp<0||resp>10){
				cout<<"Epa, bruto, te dije que es entre 1 y 10, coñoetumadre\n"<<endl;
			}
		}while (resp<0||resp>10);


		columna.Insertar(Fila(-1));
		columna.Remover(fa);
		while (fa.getId()!=-1){
			if (fa.getId()==resp){
				Pila<int> aux;
				int naux;
				while (!fa.numeros.Vacia()){
					fa.numeros.Remover(naux);
					aux.Insertar(naux);
				}
				while (!aux.Vacia()){
					aux.Remover(naux);
					cout<<fa.getId();
					cout<<"x";
					cout<<naux;
					cout<<"=";
					cout<<fa.getId()*naux<<endl;
					fa.numeros.Insertar(naux);
				}
			}
			columna.Insertar(fa);
			columna.Remover(fa);
		}
	}while(resp!=0);
	return 0;
}
